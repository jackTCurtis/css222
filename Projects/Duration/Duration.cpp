#include "Duration.h"
#include <iostream>
using namespace std;

void Duration::to_string(){
    if ((digit - 86400)>=0)
    {
        digit - 86400;
        days=days+1;
        //theyre 86400 seconds in a day
        cout << days;
    }
    
    
}
int main(){
Duration tinyobj;
tinyobj.digit = 864001;
tinyobj.to_string();
}