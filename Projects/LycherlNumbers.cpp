#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){
    int inputnum;
    cout << "Define Input:" << endl;
    cin >> inputnum;

    cout << "Define maximum amount of iterations (Hard limit of 25):" << endl;
    int maxops;
    cin >> maxops;
    //makes sure the input doesnt go over or under limit
    if (maxops > 25){
        maxops = 25;
        cout << "Max amount is too high, set to 25";
    }else if (maxops < 1){
        maxops = 1;
        cout << "Max amount was too low, set to 1";
    }
    
    string lefthalf = "";
    string righthalf = "";

    //beacuase of some bs c++ syntax i need to make a bufferstring thats just a string version of inputnum
    string bufferstring = (to_string(inputnum));
    cout << "----" << endl;

    int e = 0;
    bool Lycherbool = false;
    while ((e!=(maxops))&&(Lycherbool == false)){
        
        //multiplyer
        inputnum = inputnum * 2;
        bufferstring = (to_string(inputnum));

        //seperater
        for (int i = 0;i < to_string(inputnum).length(); i++ ){
            if((to_string(inputnum)).length() % 2 == 0){
                //input is even
                if (i < ((to_string(inputnum)).length()/2)){
                    //i is still in the left half
                    lefthalf = lefthalf + bufferstring[i];
                } if (i >= ((to_string(inputnum)).length()/2)){
                    //i is still in the right half
                    righthalf = righthalf + bufferstring[i];
                }
                
            } else{
            //input is odd
            if (i < ((to_string(inputnum)).length()/2)){
                    //i is still in the left half
                    lefthalf = lefthalf + bufferstring[i];
                } if (i > ((to_string(inputnum)).length()/2)){
                    //i is still in the right half
                    //this will skip the middle value
                    righthalf = righthalf + bufferstring[i];
                }
            
            }
    }
    
        //string reverser
        string temprightstring = righthalf;
        reverseStr(temprightstring);
        //chechker
        if (lefthalf == temprightstring){
            Lycherbool = true;
            cout << "After " << e << " iterations, your input has reached a non-Lycherl number of:" << inputnum;
        }else{
        e++;
        }
    }


}