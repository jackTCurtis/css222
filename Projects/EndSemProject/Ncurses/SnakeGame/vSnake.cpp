#include <ncurses.h>
#include "vSnake.hpp"
#include "board.hpp"
#include "Drawlabe.hpp"
using namespace std;
#define BOARD_DIM 20
#define BOARD_ROW BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2.5
//snake through vim keybinds, h,j,k,l
int main(int argc, char ** argv){
initscr(); //initlizes the screen for ncurses
noecho(); //noecho just is a setting that makes it when the user types on the keyboard it DOES NOT appear
refresh(); //refreshes the screen for ncurses

SnakeGame game(BOARD_ROW,BOARD_COLS);
/*
creates the game window (technically the whole terminal), using the terminals
width (coloms) and height (rows) this done so the actual window the game is played in
scales properly too the terminal
*/
//main game loop calls for each nessecary function to keep the game running and reciving inputs
while (!game.isOver())
{
    game.processInput();
    game.updateState();
    game.redraw();
}


getch();
endwin();
return 0;
}