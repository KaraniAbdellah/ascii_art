#ifndef ASCII_ART
#define ASCII_ART


//////////////////////////////////
	#define TOP "\033[H"
	#define CLEAR "\033[J"
	#define STOP 'e'
	#define BUFFER_SIZE 100
	#define WHT "color"
	
	
	void print_error(char *str);
	void display_ascii_art(char *file);
	int get_stop_pos(char *buffer);



////////////////////////////////// 


#endif
