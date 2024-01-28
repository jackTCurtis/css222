#pragma once
#include <ncurses.h>
#include "board.h"

class SnakeGame{
    public:
    //main controller
    SnakeGame(int height, int width){
        board = Board(height,width);
        board.initlize();
        game_over = false;
    }
    void processInput(){
        chtype input = board.getInput();
    }
    //updates all information in the game like the score, snake, apple, etc.
    void updateState(){

    }
    void redraw(){
        board.refresh();
    }
    bool isOver(){
        return game_over;
    }
    private:
    Board board;
    bool game_over;
};