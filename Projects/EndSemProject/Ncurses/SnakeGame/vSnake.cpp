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
/*
25 supdates will kill the game so once it hits 25
it will set back to 1, the idea is to be able to kill the 
game if a player looses it will set it too 26 seconds.
*/
/*
this is the main updater for this current version
*/
while (board.secondsClock<26)
{
    board.secondsClock++;
    if (board.secondsClock == 25)
    {
        board.checkDirection();
    switch (board.Direction){
        case 'h':
            board.addAt(board.SnakeX,board.SnakeY,'0');
            break;
        case 'j':

            break;
        case 'k':

            break;
        case 'l':

            break;
    }
    board.secondsClock = 0;
    }
    board.refresh();

}



getch();
endwin();
return 0;
}