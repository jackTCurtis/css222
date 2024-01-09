#include <ncurses.h>
using namespace std;

int main(int argc,char ** argv){
    ///initilizes the screen
    //setsup memory and clears the screen
    initscr();

    //prints a string(const char *) to a window
    printw("Hello 2-D World!");

    //refreshes the screen to match it to whats on memory
    refresh();

    //whats fpr user input, returns int calue of that key
    int c = getch();
    printw("%d",c);

    //deallocates memory and ends ncurses
    endwin();
    return 0;
}