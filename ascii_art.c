#include <stdio.h>
#include "ascii_art.h"
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>


// print error
void print_error(char *str) {
	printf("%s\n", str); exit(1);
}

// find the STOP ['e'] position in buffer
int get_stop_pos(char *buffer) {	
	
	for (int i = 0; i < BUFFER_SIZE; i++) {
		if (buffer[i] == STOP) {
			buffer[i] = '\0'; return i;
		}
	}
	return -1;
	
}


void clear_sleep() {
	usleep(500000);
	system("clear");
}


void display_ascii_art(char *file) {
	
	// define the varaibles
	FILE *p_file;
	char buffer[BUFFER_SIZE];
	int stop_pos;
	
	p_file = fopen(file, "r");
	if (p_file == NULL) print_error("can not open this file");
	
	// set backgrounf color and text color
	// printf("%s", WHITE_TEXT);
	// printf("%s", BLACK_BACKGROUND);
	
	while (1) {
		
		// set the bytes to NULL
		memset(buffer, 0, BUFFER_SIZE);
		
		// read from file
		char *c = fgets(buffer, BUFFER_SIZE - 1, p_file);
		if (c == NULL) print_error("can not read this stream");
		
		// check if we are in EOF
		if (feof(p_file)) {
			fseek(p_file, 0, SEEK_SET);
			clear_sleep();
			continue;
		}
		
		// check we are in STOP & print the stream
		stop_pos = get_stop_pos(buffer);
		if (stop_pos == -1) {
			fprintf(stdout, "%s", buffer);
		}
		else {
			fprintf(stdout, "%s ", buffer);
			for (int i = stop_pos + 1; i < BUFFER_SIZE; i++) printf("%c", buffer[i]);
			clear_sleep();
		}
	}
	
	fclose(p_file);

}




































