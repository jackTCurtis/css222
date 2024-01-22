#include <ncurses.h>
using namespace std;
//snake through vim keybinds, h,j,k,l
int main(int argc, char ** argv){
initscr();
refresh();

int tHeight;
int tLength;
getmaxyx(stdscr,tHeight,tLength);

WINDOW * boardWindo = newwin(20,20,(tHeight/2)-10,(tLength/2)-10);
box(boardWindo, 0 ,0);
wrefresh(boardWindo);

getch();
endwin();
return 0;
}