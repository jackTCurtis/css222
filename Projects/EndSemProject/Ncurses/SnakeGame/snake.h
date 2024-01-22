using namespace std;

class Board{
    
    public:
    Board(int height, int width){
        int tHeight;
        int tLength;
        getmaxyx(stdscr,tHeight,tLength);

        boardWindo = newwin(height,width,(tHeight/2)-(height/2),(tLength/2)-(width/2));
        box(boardWindo, 0 ,0);
        wrefresh(boardWindo);

        this->height = height;
        this->width = width;

    }
    private:
    WINDOW *boardWindo;
    int height, width;
};