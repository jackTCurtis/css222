#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int main(){
    int inputamnt;

    cout << "How many input int's do you want: ";
    cin >> inputamnt;

    int inputarray[inputamnt];

    for (int i = 0; i < inputamnt; i++)
    {
        cout << "Your input for array index " << i << ": ";
        cin >> inputarray[i];
    }

    //filter1   
    cout << "---------" << endl;
    int pointeraverage;
    int i;
    for (i = 0; i < sizeof(inputarray) / sizeof(int); i++)
    {
        cout << *(&inputarray+i*4) << "\t"<< "Location: "<<long(&inputarray+i*4)<<"\n";
        pointeraverage=+long(&inputarray[i]);
    }
    cout << "Location of array: "<< long(&inputarray+i*4)<< endl;
    cout << "---------" << endl;
    cout << "Pointer Average: " << pointeraverage/ i;

}