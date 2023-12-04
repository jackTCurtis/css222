#include <iostream>
#include <cstdlib>
#include "ComplexObject.cpp"
using namespace std;

int main(){
            Complex c1(2,3);
            Complex c2(4,7);

            Complex sum = c1 + c2;
            Complex c1(1, 0.8, POLAR);
            cout << c1.str_polar() << endl;
            cout << sum.str_cartesian() << endl;
           
        }