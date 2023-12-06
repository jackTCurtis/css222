#include <iostream>
#include <cstdlib>
#include "ComplexObject.cpp"
using namespace std;

int main(){
            Complex c2(4,7);
            Complex c1(1, 0.8);
            
            c1=c1-c2;   

            cout << c1 << endl;

            cout << c1.str_polar() << endl;
            cout << sum.str_cartesian() << endl;
           
        }