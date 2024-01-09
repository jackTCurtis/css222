#include <ncurses.h>
using namespace std;

int main(int argc,char ** argv){
    ///initilizes the screen
    //setsup memory and clears the screen
    initscr();

    
    //refreshes the screen to match it to whats on memory
    refresh();

    
    //deallocates memory and ends ncurses
    endwin();
    return 0;
}