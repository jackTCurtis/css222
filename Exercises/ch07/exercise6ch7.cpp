#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    cout << "Enter a sentace:" << endl;
    
    string inputstr;
    cin >> inputstr;

    string uppers;
    string lowers;

    
    int i = 0;
    while(i < inputstr.length()-1)
    {
       if (isupper(inputstr[i])){
            uppers+inputstr[i];
       } else if (islower(inputstr[i])){
            lowers+inputstr[i];
       } else{
        cout<<"Error, probably not a letter"<<endl;
       }
       i++;
    }
    cout<<"Uppercase Letters:"<<endl;
    cout<<uppers<<endl;

    cout<<"Lowercase Letters:"<<endl;
    cout<<lowers<<endl;
    return 0;
}