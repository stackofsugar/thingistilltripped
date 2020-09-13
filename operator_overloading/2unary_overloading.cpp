#include <iostream>
using namespace std;

class Division {
    private:
        int x, y;
    public:
        Division(int, int);
        int Calculate();
        Division operator++(int);
        void printCalc(Division);
};

Division::Division(int x , int y){
    this->x = x; this->y = y;
}

int Division::Calculate(){
    return x / y;
}

Division Division::operator++(int){
    x = x+7;
    y = y++;
    return Division(x,y);
}

void Division::printCalc(Division other) {
    cout << "1. " << this->Calculate() << " 2. " << other.Calculate() << endl;
}

int main() {
    Division obj1(5, 2), obj2(7, 3);
    obj1.printCalc(obj2);

    obj1++;
    obj2++;

    obj1.printCalc(obj2);

return 0;
}