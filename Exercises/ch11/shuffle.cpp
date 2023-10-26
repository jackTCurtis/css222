#include <iostream>
#include <array>
#include <cmath>
#include <time.h>
using namespace std;

int shuffle(int array[10]){
    //defining 
    for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
    {
        array[i] = rand() % 100;
    }
    int checkedlist[10];
    int randnumb;
    int inpint1;
    int inptint2;
    

    //the rest
    for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
    {
        randnumb = rand() % 10;
        for (int b = 0; b < (sizeof(checkedlist) / sizeof(int)); b++)
        {
            if (randnumb == checkedlist[b]){
                randnumb = rand() % 10;
            }
            
        }
        while ((!(randnumb == checkedlist[b]))&&())
        {
            /* code */
        }
        
        
        
        
    }
    
}

int main(){
    srand(time(0));
}