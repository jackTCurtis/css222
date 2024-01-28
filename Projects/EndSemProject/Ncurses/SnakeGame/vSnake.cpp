#include <ncurses.h>
#include "snake.h"
#include <iostream>
using namespace std;

#define BOARD_DIM 20
#define BOARD_ROW BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2.5

//snake through vim keybinds, h,j,k,l
int main(int argc, char ** argv){
initscr();
refresh();
bool colorFlipper = true;
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
cbreak();
noecho();

board.secondsClock = 0;
while (board.secondsClock<26)
{
    board.secondsClock=board.secondsClock+1;
    if (board.secondsClock ==  25)
    {
        if (colorFlipper == true)
        {
            attron(A_REVERSE);
            board.addAt(board.SnakeX,board.SnakeY,'0');
            colorFlipper = false;
        }
        else{
            attroff(A_REVERSE);
            board.addAt(board.SnakeX,board.SnakeY,'0');
            colorFlipper = true;
        }
        wrefresh(*boardWindo);
    /*
    switch (board.Direction){
        case 'h':
            board.SnakeX--;
            board.addAt(board.SnakeY,board.SnakeX,'0');
            break;
        case 'j':
            board.SnakeY++;
            board.addAt(board.SnakeY,board.SnakeX, '0');
            break;
        case 'k':
            board.SnakeY--;
            board.addAt(board.SnakeY,board.SnakeX, '0');
            break;
        case 'l':
            board.SnakeX++;
            board.addAt(board.SnakeY,board.SnakeX, '0');
            break;
    }*/
    board.secondsClock = 0;
    }
    board.refresh();

}



getch();
getch();
endwin();
return 0;
}