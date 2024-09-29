#include <stdio.h>
#include "ascii_art.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



void print_error() {
	printf("Problem In File\n"); exit(1);
}


void display_ascii_art(char *file) {
	
	// open file
	FILE *p_file = fopen(file, "r");
	if (p_file == NULL) print_error();
	else {
		// read file using fgect() function
		char c;
		while ((c = fgetc(p_file)) && c != EOF) {
			
			if (c == STOP) { // [1] & [2]
				// move cursor to top
				printf(TOP);
				// remove all terminal down content
				printf(CLEAR);
				usleep(170000);
			} else printf("%c", c);
			
		}
		if (c == EOF) {
			printf(CLEAR); display_ascii_art(file);
		}
	}
	fclose(p_file);
	
}



// ----------- tasks
// [1]: add another condition --> cursor to begin
// [2]: understand what is ANSI escape codes
// [3]: find another way to clear terminal --> see idea in this video





















