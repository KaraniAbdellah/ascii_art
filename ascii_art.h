#ifndef ASCII_ART
#define ASCII_ART


//////////////////////////////////

	// Constances
	#define STOP 'e'
	#define BUFFER_SIZE 100
	
	// Escape Sequence
	#define TOP "\033[H"
	#define CLEAR "\033[J"
	#define RED "\033[31m"   // red color
	#define GREEN_TEXT "\033[32m"  // green text
	#define BROWN_TEXT "\033[38;5;94m"  // light brown background
	#define PINK_TEXT "\033[38;5;205m"   // pink color
	#define WHITE_TEXT "\033[37m"  // white color
	#define BLACK_BACKGROUND "\033[40m" // black background 

	#define RESET "\033[0m"       // Reset colors to default


	
	// function prototypes
	void print_error(char *str);
	void display_ascii_art(char *file);
	int get_stop_pos(char *buffer);
	
////////////////////////////////// 


#endif
