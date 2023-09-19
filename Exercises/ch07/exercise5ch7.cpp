#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string fruit = "banana";
    string baked_good = " nut bread";
    string dessert = fruit + baked_good;
    cout << dessert << endl;

    string suffix = "ack";

    char letter = 'J';
    while (letter < 'R') {
        if((letter == 'Q') || (letter == 'O')){
            suffix = "uack";
            cout << letter + suffix << endl;
            suffix = "ack";
        } else {
        cout << letter + suffix << endl;
        
        }
        letter++;
    }
    return 0;
}