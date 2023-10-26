#include <iostream>
#include <fraction.h>
using namespace std;

Fraction::Fraction(int n, int d){
    numerator = n;
    denominator = d;
}

void Fraction::print(){
    cout << "Numerator:" << numerator << endl <<"Denominator:" << denominator << endl; 

}
void Fraction::plus(Fraction& fruct){
    numerator *= fruct.denominator;
    fruct.numerator *= denominator;
    denominator *= fruct.denominator;
    numerator += fruct.numerator;
}
void Fraction::minus(Fraction& fruct) {
    numerator *= fruct.denominator;
    fruct.numerator *= denominator;
    denominator *= fruct.denominator;
    numerator -= fruct.numerator;
}

void Fraction::times(Fraction& fruct) {
    numerator *= fruct.numerator;
    denominator *= fruct.denominator;
}

void Fraction::divided_by(Fraction& fruct) {
    numerator *= fruct.denominator;
    denominator *= fruct.numerator;
}
