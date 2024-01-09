#include <ncurses.h>
using namespace std;

int main(int argc){
    initscr();

    refresh();

    getch();

    endwin();
    return 0;
}