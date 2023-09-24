#include <iostream>
#include <string>
#include <cmath>
using namespace std;



int main(){
    int inputnum;
    cout << "Define Input:" << endl;
    cin >> inputnum;

    cout << "Define maximum amount of iterations (Hard limit of 25):" << endl;
    int maxamntofiterations;
    cin >> maxamntofiterations;
    //makes sure the input doesnt go over or under limit
    if (maxamntofiterations > 25){
        maxamntofiterations = 25;
        cout << "Max amount is too high, set to 25";
    }else if (maxamntofiterations < 1){
        maxamntofiterations = 1;
        cout << "Max amount was too low, set to 1";
    }
    
    string lefthalf;
    string righthalf;


    if((to_string(inputnum)).length() % 2 == 0){
        //input is even
        for (int i = 0;i < ((to_string(inputnum)).length()); i++ ){
            if (i < (((to_string(inputnum)).length())/2)){
                //i is still in the left half
                lefthalf[i]=(to_string(inputnum))[i];
            } if (i > (((to_string(inputnum)).length())/2)){
                //i is still in the right half
                righthalf[i]=(to_string(inputnum))[i];
            }
        }
        cout << "blah blah" <<endl;
    } else{
        //input is odd
    }
    cout << lefthalf << "+" << righthalf;


}