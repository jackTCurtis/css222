#include <iostream>
#include <cmath>
using namespace std;

void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}

int main(){
    recurse_forever(1);
}