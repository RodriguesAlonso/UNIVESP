#include <iostream>
#include "time.h"
using std::cout;
using std::cin;
using std::endl;

int Time::getHour() const{
    return hour;
}
int Time::getMinute() const{
    return minute;
}
int Time::getSecond() const{
    return second;
}

void Time::print() const{
    cout << hour << ":" << minute << ":" << second;
}

void Time::setHour(int hour){
    this -> hour = hour;
}