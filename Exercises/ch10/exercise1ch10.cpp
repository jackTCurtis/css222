#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    srand((unsigned) time(NULL));

    for (int i = 0; i < 11; i++)
    {
        cout<< rand()%10 <<" ";
    }
    
}