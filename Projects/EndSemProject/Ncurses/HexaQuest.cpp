#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv){
	initscr();
	refresh();
	start_color();
	cbreak();
	WINDOW * win = newwin(15,50,1,2);
	box(win,0,0);
	mvwprintw(win,(win->height/2),(50/2)-4,"Hola");
	wrefresh(win);
	getch();
	endwin();
	return 0;
}
