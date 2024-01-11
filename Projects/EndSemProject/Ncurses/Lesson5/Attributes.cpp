#include <ncurses.h>
using namespace std;

int main(int argc,char ** argv){
	initscr();
	refresh();
	start_color();
	init_pair(1,COLOR_CYAN,COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("this is my text ");
	attroff(COLOR_PAIR(1));
	printw("womp wompS");
	getch();
	endwin();
	return 0;
}
