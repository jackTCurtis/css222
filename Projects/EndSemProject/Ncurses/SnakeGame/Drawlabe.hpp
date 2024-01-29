#pragma once
//this header file is to draw everything that needs to be drawed
//it could've been fit into the vSnake Header but it would've been a mess
//of member functions
class Drawable {
    public:
    Drawable(){
        y = x = 0; // top left corner by defualt
        icon = ' '; // blank
    }
    Drawable(int y, int x, chtype ch){
        this->y=y;
        this->x=x;
        this->icon = ch;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    chtype getIcon(){
        return icon;
    }
    protected:
    int y, x;
    chtype icon;
};