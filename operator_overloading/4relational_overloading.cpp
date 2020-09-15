#include <iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
        Distance(int, int);
        void displayDistance();
        Distance operator>(Distance&);
};

Distance::Distance(int x = 0, int y = 0){
    feet = x; inches = y;
}