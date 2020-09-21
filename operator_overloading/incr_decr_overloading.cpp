#include <iostream>
using namespace std;

class Time {
    private:
        int minute, hour;
    public:
        Time(int,int);
        void displayTime();
        Time operator++();    //prefix
        Time operator++(int); //postfix
};
Time::Time(int x = 0, int y = 0){
    minute = y; hour = x;
} 
void Time::displayTime(){
    cout << hour << " hours and " << minute << " minutes." << endl;
}
Time Time::operator++(){
    minute++;
    if (minute >= 60){
        hour++;
        minute -= 60;
    }
    return Time(hour, minute);
}
Time Time::operator++(int){
    minute++;
    if (minute >= 60){
        hour++;
        minute -= 60;
    }
    return Time(hour, minute);
}

int main(){
    Time obj1(2,15), obj2(5,59);
    cout << "Object 1: "; obj1.displayTime();
    cout << "Object 2: "; obj2.displayTime();

    obj1++; obj2++;

    cout << "Object 1: "; obj1.displayTime();
    cout << "Object 2: "; obj2.displayTime();

    ++obj1; ++obj2;

    cout << "Object 1: "; obj1.displayTime();
    cout << "Object 2: "; obj2.displayTime();
}