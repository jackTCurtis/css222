#include <iostream>
#include <time.h>
using namespace std;


int main() {
srand(time(NULL));
int n = rand() % 10;
int c = rand() % 5;
int b = rand() % 10 +15;
int a = rand() % 1+3;
int d = rand() % 7+13;

cout << "The product of " << n << " and " << c << " is ";
cout << n * c << "." << endl;

return 0;
}
