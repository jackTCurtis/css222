#include <iostream>
#include <math.h>
using namespace std;

void overloaded_function(int AHhhhh){
 cout << "overloaded function 1 has been called";
}
void overloaded_function(double AHHH, int Aughhh){
 cout << "overloaded function 2 has been called";
}
void overloaded_function(int gahhhh, int Gahh){
 cout << "overloaded function 3 has been called";
}
void overloaded_function(double weee, double ohhhh){
 cout << "overloaded function 4 has been called";
}
void overloaded_function(double AHHHH){
 cout << "overloaded function 5 has been called";
}

int main(){
    overloaded_function(10.6);
    overloaded_function(-4);
    overloaded_function(7.5,4);
    overloaded_function(6.7,4.5);
    overloaded_function(7,9);
    return 0;
}
