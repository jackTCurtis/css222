#include <ncurses.h>
#include <snake.h>
using namespace std;

#define BOARD_DIM 20
#define BOARD_ROW BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2.5

//snake through vim keybinds, h,j,k,l
int main(int argc, char ** argv){
initscr();
refresh();

int tHeight;
int tLength;
getmaxyx(stdscr,tHeight,tLength);



WINDOW * boardWindo = newwin(BOARD_ROW,BOARD_COLS,(tHeight/2)-(BOARD_ROW/2),(tLength/2)-(BOARD_COLS/2));
box(boardWindo, 0 ,0);
wrefresh(boardWindo);

getch();
endwin();
return 0;
}