#include <ncurses.h>
using namespace std;

int main(int argc,char ** argv){
    ///initilizes the screen
    //setsup memory and clears the screen
    	initscr();
	cbreak();
    //newwin(height, width, start_y, start_x);
    WINDOW * win = newwin(10,20,10,10);
	refresh();
	box(win,103,0);
	mvwprintw(win,1,1,"hello window");
	wrefresh(win);
    	//refreshes the screen to match it to whats on memory
    	refresh();

     	getch();
    //deallocates memory and ends ncurses
    	endwin();
    	return 0;
}
