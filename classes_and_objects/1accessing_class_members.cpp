#include <iostream>
using namespace std;

class box{
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    box box1; box box2;
    double volume = 0.0;

    box1.breadth = 5.0;
    box1.length = 7.0;
    box1.height = 8.0;
 
    box2.breadth = 7.0;
    box2.length = 4.0;
    box2.height = 9.0;
 
    volume = box1.breadth * box1.length * box1.height;
    cout << "The volume of box 1 is: " << volume << endl;

    volume = box2.breadth * box2.length * box2.height;
    cout << "The volume of box 2 is: " << volume << endl;

return 0;
}