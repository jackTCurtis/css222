#include <iostream>
#include <cstdlib>
#include "ComplexNumbers.h"
#include <assert.h>
using namespace std;

enum Flag {POLAR};

Complex::Complex(double m, double t, Flag) {
    mag = m; theta = t;
    polar = true;
}
Complex::Complex(double m, double t, Flag){
    mag =m; theta = t;
    polar = true;
    calculate_cartesian();
}
string Complex::to_string(){
    return to_string(real) + " + " + to_string(imag) + "i";
}

double Complex::get_real(){
    return real;
} 
double Complex::get_imag(){
    return imag;
}
void Complex::calculate_polar(){
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag/real);
    polar = true;
}
void Complex::calculate_cartesian(){
    assert(polar == true);
    real = mag * cos(theta);
    imag = mag * sin(theta);
}
double Complex::get_mag(){
    if (polar == false) calculate_polar;    
    return mag;
}
double Complex::get_theta(){
    if (polar == false) calculate_polar;
    return theta;
}
void Complex::abs(){
    return Complex(abs(real),abs(imag));
}
string Complex::str_cartesian(){
    return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
}

string Complex::str_polar(){
    string theta = to_string(get_theta());
    string mag = to_string(get_mag());
    return mag + "e^" + theta + "i";
}
Complex Complex::operator * ( Complex& c){
    if (polar == false) calculate_polar();
    if (c.polar == false) c.calculate_polar();
    return Complex(real + c.real, imag + c.imag);
}
Complex Complex::operator - (const Complex& c) {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator / (Complex& c) {
    if (polar == false) {
        this->calculate_polar();
    }
    if (c.polar == false) {
        c.calculate_polar();
    }

    Complex num(mag / c.mag, theta - c.theta, POLAR);
    num.calculate_cartesian();
    return num;
}


        