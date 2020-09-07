#include <iostream>
using namespace std;

class Box {
    private:
        int weight, height;
    public:
        Box(int, int);
        void printAll();
        Box operator+(const Box& boxref);
};

Box::Box(int x = 0, int y = 0) {
    weight = x; height = y;
}
void Box::printAll() {
    cout << "The weight is " << weight << " and the height is " << height << endl;
}
Box Box::operator+(const Box& boxref) {
    Box box;
    box.weight = weight + boxref.weight;
    box.height = height + boxref.height;
return box;
}


int main() {
    Box BOX1(2, 4); Box BOX2(6, 7);
    Box BOX3 = BOX1 + BOX2;
    BOX3.printAll();
return 0;
}