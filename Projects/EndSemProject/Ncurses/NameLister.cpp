#include <ncurses.h>
using namespace std;
//snake through vim keybinds, h,j,k,l
int main(int argc, char ** argv){
	initscr();
	refresh();
	start_color();
	int height;
	int length;
	getmaxyx(stdscr,height,length);

	char message[]="This is my message and it should list";
	char unsentmessage[]="";

	cbreak();
	WINDOW * win = newwin(height-1,length-2,1,2);
	box(win,0,0);
	
	mvwprintw(win,(height/2),(length/2)-4,message);
	wrefresh(win);
	getch();
	endwin();
	return 0;
}
