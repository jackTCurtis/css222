#include <iostream>
#include <math.h>
using namespace std;

int compare(int a, int b){
if (a>b) {
    cout<< a << "is greater than " << b;
} else if (a == b){
    cout<< a << "is equal too " << b;
} else {
    cout<<a<<"is less than " << b;
}
return 0;
}
int main(){
    compare(10,5);
    return 0;
}