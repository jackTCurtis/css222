#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct point {
    float x, y;
};

struct Rectangle {
    point topLeftCorner;
    float height, width;
};

point lowRight(Rectangle r){
    point lowerRight;
    lowerRight.x=r.topLeftCorner.x + r.width;
    lowerRight.y=r.topLeftCorner.y-r.height;
    return lowerRight;
}

int main(){
    Rectangle rect;

    cout << endl;
    cout << "Height: ";
    cin >> rect.height;
    cout << "Width: ";
    cin >> rect.width;
    cout << endl;
    cout << "left corner x: ";
    cin >> rect.topLeftCorner.x;
    cout << "left corner y: ";
    cin >> rect.topLeftCorner.y;
    cout << endl;

    point output = lowRight(rect);
    cout << "The lower right corner (" << output.x << ", " << output.y << ").";
    return 0;
}