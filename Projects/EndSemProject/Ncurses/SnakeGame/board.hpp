#pragma once
#include<time.h>
#include<stdlib.h>
#include "Drawlabe.hpp"

using namespace std;
class Board{
    //all of these member functions are part of the board
    public:
    Board(){
        construct(0,0);
    }
    Board(int height, int width){
        
        construct(height,width);
    }
    void initlize(){
        clear();
        refresh();
    }
    void addBorder(){
        box(boardWindo,0,0);
        //draws the board window
    }
    void add(Drawable drawable){
        addAt(drawable.getY(), drawable.getX(), drawable.getIcon());
    }
    void addAt(int y, int x, chtype ch){
        mvwaddch(boardWindo,y,x,ch);
        //places a character
    }
    chtype getInput(){
        return wgetch(boardWindo);
    }
    void getEmptyCoordinates(int& y, int& x){
        while((mvwinch(boardWindo, y = rand()% height,  x = rand() % width)) == ' ');
    }
    void clear(){
        wclear(boardWindo);
        addBorder();
    }
    void refresh(){
        wrefresh(boardWindo);
        //refreshes window
    }
    private:
    WINDOW *boardWindo;
    int height, width;

    void construct(int height, int width){
        int cHeight;
        int cLength;
        this->height = height;
        this-> width = width;
        getmaxyx(stdscr,cHeight,cLength);
        boardWindo = newwin(height,width,(cHeight/2)-(height/2),(cLength/2)-(width/2));
        //constructs the board window and scales properly to the terminals dimension

    }
};