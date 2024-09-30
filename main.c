#include <stdio.h>
#include "ascii_art.h"


int main(int argc, char **argv) {

	if (argc < 2) {
		print_error("Inavlid arguments number");
	} else {
		display_ascii_art(argv[1]);
	}
	
	return 0;
	
}



