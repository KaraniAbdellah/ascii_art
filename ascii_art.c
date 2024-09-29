#include <stdio.h>
#include "ascii_art.h"
#include <stdlib.h>
#include <string.h>




void print_error() {
	printf("Problem In File\n"); exit(1);
}


void display_ascii_art(char *file) {
	
	// open file
	FILE *p_file = fopen(file, "r");
	if (p_file == NULL) print_error();
	else {
		// read file using 
		char c;
		while ((c = fgetc(p_file)) && c != EOF) {
			printf("%c", c);
			if (c == 'e') { // [1] & [2]
				// move cursor to top 
				printf(TOP);
				// remove all terminal down content
				printf("\033[J");
			}
		}
	}
	fclose(p_file);
	
}



// ----------- tasks
// [1]: add another condition --> cursor to begin
// [2]: understand what is ANSI escape codes
// [3]: find another way to clear terminal --> see idea in this video





















