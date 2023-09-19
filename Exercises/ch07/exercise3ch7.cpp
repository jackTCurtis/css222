#include <cmath>
#include <iostream>
#include <string>
using namespace std;

string count_letters(int intinp, string strinp, string state){
    string state = "Mississippi";
    int count = 0;

    for (int index = 0; index < state.length(); index++){
        if ((state[index] == to_string(intinp)) || (state[index] == strinp)){
            cout << "blah blah blah";
        }
    }
    cout << count << endl;
    return 0;
}

//((state[index] == to_string(intinp)) || (state[index] == strinp))

int main(){
    /*
    string state = "Mississippi";
    int count = 0;
    int index = 0;

    while (index < state.length()) {
        if (state[index] == 'i') {
            count = count + 1;
        }
        index = index + 1;
    }
    cout << count << endl;
*/

}