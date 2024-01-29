#pragma once
#include <ncurses.h>
#include "board.hpp"
#include "Drawlabe.hpp"
#include "apple.hpp"
#include <time.h>
#include<stdlib.h>

class SnakeGame{
    public:
    //main controller
    SnakeGame(int height, int width){
        board = Board(height,width);
        board.initlize();
        game_over = false;
        srand(time(NULL));

    }
    void processInput(){
        chtype input = board.getInput();
    }
    //updates all information in the game like the score, snake, apple, etc.
    void updateState(){
        int y, x;
        board.getEmptyCoordinates(y,x);
        board.add(Apple(y, x));
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