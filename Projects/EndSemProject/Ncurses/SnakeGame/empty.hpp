#pragma once
#include <ncurses.h>
#include "Drawlabe.hpp"

class Empty : public Drawable{
    Empty(int y, int x){
        this->y=y;
        this->x=x;
        this->icon=' ';
    }
};