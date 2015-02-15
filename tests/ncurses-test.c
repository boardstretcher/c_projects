#include <ncurses.h>

int main()
{
		int endgame = 0;

		initscr();	
		raw();			
		keypad(stdscr, TRUE);
		noecho();	

		printw("Type any character to see it in bold\n");
		refresh();

		while (endgame != 10) {	
			int ch = getch();		
			if(ch == KEY_F(1)) 
				goto out;
			else {	
				printw("\nThe pressed key is ");
				attron(A_BOLD);
				printw("%d", ch);
				attroff(A_BOLD);
			}
		}

	out:
		printw("\n\nENDING\n");
		refresh();			/* Print it on to the real screen */
	   	getch();			/* Wait for user input */
		endwin();
		return 0;
}
