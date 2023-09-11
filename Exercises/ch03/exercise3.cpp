#include <iostream>
#include <math.h>
using namespace std;

void rndmnumbergenerator (int inp1, int inp2) {
if ((inp2 == 0)&&(!(inp1==0))) {
inp2 = rand() % 100;
cout << "Your summary is " << inp1 << "+" << inp2 << "=" << inp1 + inp2 << endl;
}
if ((inp2 == 0)&&(inp1==0)) {
inp2 = rand() % 100;
inp1 = rand() % 100;
cout << "Your summary is " << inp1 << "+" << inp2 << "=" << inp1 + inp2 << endl;
}
if ((!(inp2 == 0))&&(!(inp1==0))) {
cout << "Your summary is " << inp1 << "+" << inp2 << "=" << inp1 + inp2 << endl;
}
}
void pointlessfunction(char bar){
    cout<<"Hello World";
}
void pointlessfunction2(char bar){
    cout<<"Hello World";
}
int main(){
 rndmnumbergenerator(10,0);
 rndmnumbergenerator(0,0);
 rndmnumbergenerator(18,22);
}

