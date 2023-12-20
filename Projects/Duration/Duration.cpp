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
        digit = digit- 86400;
        days=days+1;
        //theyre 86400 seconds in a day
    }else if((digit - 3600)>=0){
        digit =digit- 3600;
        hours=hours+1;
        //theyre 3600
        
    }else if((digit - 60)>=0){
        digit =digit- 60;
        minutes = minutes + 1;
        //theyre 60 sceonds in a day
       
    }else{ 
        seconds=digit;
        digit = 0;
       
    }}
    
    //cout<< "output:"<<endl<<"days: "<<days<<endl<<"hours: "<<hours<<endl<<"minutes: "<<minutes<<endl<<"seconds: "<<seconds;

    cout<<"PT"<<days<<"D"<<hours<<"H"<<minutes<<"M"<<seconds<<"S";
    }
    
}
int main(){
Duration tinyobj;
tinyobj.digit = 3600;
tinyobj.to_string();
}