#include "Duration.h"
#include <iostream>
using namespace std;

void Duration::to_string(){
    if (digit == 0)
    {
        seconds=digit;
        
        cout << seconds;
    }else{
    
    while (digit > 0)
    {
    if ((digit - 86400)>=0)
    {
        digit =digit- 86400;
        days=days+1;
        //theyre 86400 seconds in a day
        cout << days;
    }else if((digit - 3600)>=0){
        digit =digit- 3600;
        hours=hours+1;
        //theyre 3600
        cout << hours;
    }else if((digit - 60)>=0){
        digit =digit- 60;
        days = days + 1;
        //theyre 60 sceonds in a day
        cout << days;
    }else{ 
        seconds=digit;
        digit = 0;
        cout << seconds;
    }}}
    
}
int main(){
Duration tinyobj;
tinyobj.digit = 500;
tinyobj.to_string();
}