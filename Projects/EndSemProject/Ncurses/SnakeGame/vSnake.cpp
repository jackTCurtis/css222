#include <ncurses.h>
#include "snake.h"
using namespace std;

#define BOARD_DIM 20
#define BOARD_ROW BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2.5

//snake through vim keybinds, h,j,k,l
int main(int argc, char ** argv){
initscr();
refresh();

Board board(BOARD_ROW,BOARD_COLS);
board.initlize();
board.addAt(5,5,'0');
board.refresh();

getch();
endwin();
return 0;
}