#include "Duration.h"
#include <iostream>
using namespace std;

Duration::Duration(){
    digit = 0;
}
Duration::Duration(int x){
    digit=x;
}
Duration Duration::operator- (Duration& d){
    return Duration(digit - d.digit);
}
Duration Duration::operator+ (Duration& d){
    return Duration(digit + d.digit);
}

//indeoendent variable calls
int Duration::seconds(){
    return digit;
}
int Duration::minutes(){
    return digit/60;
}
int Duration::hours(){
    return digit/3600;
}
int Duration::days(){
    return digit/86400;
}

void Duration::to_string(){
    cdigit=digit;
    if (cdigit == 0)
    {
        seconds=cdigit;
        
        cout << seconds;
    }else{
    
    while (cdigit > 0)
    {
    if ((cdigit - 86400)>=0)
    {
        cdigit = cdigit- 86400;
        days = days + 1;
        //theyre 86400 seconds in a day
    }else if((cdigit - 3600)>=0){
        cdigit = cdigit - 3600;
        hours = hours + 1;
        //theyre 3600 seconds in a hour
        
    }else if((cdigit - 60)>=0){
        cdigit = cdigit - 60;
        minutes = minutes + 1;
        //theyre 60 sceonds in a minute
       
    }else{ 
        seconds = cdigit;
        cdigit = 0;
       
    }}
    
    //cout<< "output:"<<endl<<"days: "<<days<<endl<<"hours: "<<hours<<endl<<"minutes: "<<minutes<<endl<<"seconds: "<<seconds;
    //cout<<"PT"<<days<<"D"<<hours<<"H"<<minutes<<"M"<<seconds<<"S"<<endl;
    cout<<"P";
    if (days>0)
    {
        cout<<days<<"D";
    }
    cout<<"T";
    if (hours>0)
    {
        cout<<hours<<"H";
    } if (minutes>0)
    {
        cout<<minutes<<"M";
    } if (seconds>0)
    {
        cout<<seconds<<"S";
    } 
    }
    }
    

int main(){
Duration tinyobj(600);
tinyobj.to_string();
}