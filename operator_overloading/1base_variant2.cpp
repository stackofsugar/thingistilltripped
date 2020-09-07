#include <iostream>
using namespace std;

class Box {
    private:
        int weight, height;
    public:
        Box(int, int);
        void printAll();
        friend Box operator+(const Box&, const Box&);
};

Box::Box(int x = 0, int y = 0) {
    weight = x; height = y;
}
void Box::printAll() {
    cout << "The weight is " << weight << " and the height is " << height << endl;
}
Box operator+(const Box& boxref1, const Box& boxref2) {
    return Box (boxref1.weight + boxref2.weight, boxref1.height + boxref2.height);
}

int main() {
    Box BOX1(2, 4); Box BOX2(6, 7);
    Box BOX3 = BOX1 + BOX2;
    BOX3.printAll();
return 0;
}