#include <iostream>
#include <cmath>
using namespace std;

void lycherlcheck(){

}

int main(){
    int inputnum;
    cout << "Define Input:" << endl;
    cin >> inputnum;

    cout << "Define maximum amount of iterations (Hard limit of 25):" << endl;
    int maxamntofiterations;
    cin >> maxamntofiterations;
    if (maxamntofiterations > 25){
        maxamntofiterations = 25;
    }else if (maxamntofiterations < 1){
        maxamntofiterations = 1;
    }
    


}