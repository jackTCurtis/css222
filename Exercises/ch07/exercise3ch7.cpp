#include <cmath>
#include <iostream>
#include <string>
using namespace std;

string count_letters(char charinp, string strinp){
    
    int count = 0;
    string state = "Mississippi";

    for (int index = 0; index < state.length(); index++){
        if ((to_string((state[index])) == to_string(charinp)) || ((to_string(state[index])) == strinp)){
            count++;
        }
    }

    
    cout << count << endl;
    return 0;
}

int main(){
    count_letters('p',"Miss");
}