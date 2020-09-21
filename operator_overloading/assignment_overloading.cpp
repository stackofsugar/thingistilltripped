#include <iostream>
using namespace std;

class Time {
    private:
        int minute, hour;
    public:
        Time(int,int);
        void displayTime();
        void operator=(Time&);
};

Time::Time(int x = 0, int y = 0){
    hour = x; minute = y;
}
void Time::displayTime(){
    cout << hour << " hours and " << minute << " minutes." << endl;
}
void Time::operator=(Time& other){
    hour = other.hour;
    minute = other.minute;
}

int main(){
    Time obj1(9,12), obj2(3,25);

    cout << "Object 1: "; obj1.displayTime();
    cout << "Object 2: "; obj2.displayTime();

    obj1 = obj2;
    cout << "Doing operation..." << endl;

    cout << "Object 1: "; obj1.displayTime();
    cout << "Object 2: "; obj2.displayTime();

    return 0;
}