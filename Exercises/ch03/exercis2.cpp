#include <iostream>
#include <math.h>
using namespace std;

void print_twice(char phil) {
	cout << phil << phil << endl;
}

int main() {
	char arguement = 'b';
	print_twice(arguement);
	return 0;
}
