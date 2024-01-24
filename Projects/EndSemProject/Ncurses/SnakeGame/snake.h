using namespace std;

class Board{
    
    public:
    int secondsClock;
    chtype Direction; //h = left j = up k = down l right
    int SnakeX, SnakeY;


    Board(int height, int width){
        int tHeight;
        int tLength;
        getmaxyx(stdscr,tHeight,tLength);

        boardWindo = newwin(height,width,(tHeight/2)-(height/2),(tLength/2)-(width/2));
        initlize();


        this->height = height;
        this->width = width;

    }
    void initlize(){
        SnakeX = 15;
        SnakeY = 15;
        clear();
        refresh();
    }
    void checkDirection(){
        Direction = wgetch(boardWindo);
        // thiw will get other keys being pressed but only hjkl are important
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
    int height, width;
};