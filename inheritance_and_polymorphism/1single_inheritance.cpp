#include <iostream>
using namespace std;

class Shape {
    protected:
        int SIDE_x, SIDE_y, SIDE_z;
    public:
        int getCircumference(){
            return SIDE_x + SIDE_y + SIDE_z;
        }

};

class Triangle : public Shape {
    protected:

    public:
        Triangle(int x, int y, int z) {
            SIDE_x = x; SIDE_y = y; SIDE_z = z;
        } 
};

int main() {
    Triangle T_1(12,14,11); Triangle T_2(5,4,7);

    cout << "The value of both triangle's circumference is: " << T_1.getCircumference() << " and " << T_2.getCircumference() << endl;

return 0;
}