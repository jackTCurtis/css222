#include <iostream>
using namespace std;

int str_len(char inp[]){
    return sizeof(inp) / sizeof(char);
}

int main(){
    char ohbutitsastring[] = "Imastring";
    cout << str_len(ohbutitsastring);
    return 0;
}