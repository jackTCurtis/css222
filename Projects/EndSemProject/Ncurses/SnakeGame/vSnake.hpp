#pragma once
#include <ncurses.h>
#include "board.hpp"
#include "Drawlabe.hpp"


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
        board.add(Drawable(3, 3, '#'));
    }
    void redraw(){
        board.refresh();
        //refreshes board
    }
    bool isOver(){
        return game_over;
        //checks if the game is over
    }
    private:
    Board board;
    bool game_over;
};