#pragma once
using namespace std;
class Board{
    
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
    }

    void addAt(int y, int x, chtype ch){
        mvwaddch(boardWindo,y,x,ch);
    }
    chtype getInput(){
        return wgetch(boardWindo);
    }
    void clear(){
        wclear(boardWindo);
        addBorder();
    }
    void refresh(){
        wrefresh(boardWindo);
    }
    private:
    WINDOW *boardWindo;
    
    void construct(int height, int width){
        int cHeight;
        int cLength;
        getmaxyx(stdscr,cHeight,cLength);
        boardWindo = newwin(height,width,(cHeight/2)-(height/2),(cLength/2)-(width/2));

    }
};