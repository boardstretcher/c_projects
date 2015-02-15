/* 
 copyright boardstretcher @ 2014
 
 "never has so little been commented so much 

:make
:cn, clist, cfirst, clast
:e another.c
:ls, :bd 2
:20 (line number)

*/

// includes
#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// function prototypes
int get_input(void);		// get a character from the main loop
void update_screen(void);	// write changes to window

// global constants
const char VERSION[] = "v0.1 alpha";

// global variables
int money = 0;	
int expenses = 0;
int endgame = 0;	

int workers = 0;
int cworkers = 10;

int main(int argc, char *argv[]){

	// initialize ncurses
	initscr();
	keypad(stdscr, TRUE);

	// main game loop
	while (endgame != 1){
		update_screen();
		int ch = getchar();
		if (ch == 80) goto out;		//F1 - quit
		if (ch == 119) workers++;	//w - buy worker
		if (ch == 32) money++;		//space	- pass

		expenses = (workers * cworkers);
		money++;
		clear();
		//printw("Keypress = ch(%c) int(%d)\n", ch, ch);
		refresh();
	}

	// shutdown window and program
	out:
	printw("\n\nEnding game. . .\n\n");
	refresh();
	sleep(2);
	endwin();
	return 0;
}

void update_screen(void){
	attron(A_BOLD);
	printw("Addictive Incremental Leveling: ");
	attroff(A_BOLD);
	printw("%s [F1 - Quit] [w - buy worker]\n", VERSION);
	printw("Total Money	  : %d\n", money);
	printw("Total Expenses: %d\n", expenses);
	printw("Num. Workers  : %d\n", workers);
	printw("\n\n\n");
	printw("Command: ");
	refresh();
}
