#include <iostream>
#include <time.h>
#include <cmath>
#include <cstring>
#include "time.h"
using namespace std;

string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

double Time::convert_to_seconds() const
{
    return ((hour * 60) + minute) * 60 + second;
}
void Time::print()
{
    cout <<week[week]<< hour << ":" << minute << ":" << second << endl;
}
void Time::increment(double secs) {
    week += int(secs/86400);
    secs -= week * 86400;
    hour += int(secs / 3600);
    secs -= hour * 60;
    minute += int(secs / 60);
    secs -= minute * 60;
    second += secs;
}
int main(){
    Time current_time(9, 14, 30.0);
    current_time.increment(500.0);
    current_time.print();
    cout << endl;

    Time bread_time(3, 35, 0.0);
    Time done_time = current_time.add(bread_time);
    done_time.print();
    cout << endl;

    if (done_time.after(current_time)) {
        cout << "The bread will be done after it starts." << endl;
    }
}

