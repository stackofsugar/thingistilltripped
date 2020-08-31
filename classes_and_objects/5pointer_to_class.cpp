#include <iostream>
using namespace std;

class Cube {
    private:
        int x,y,z;
    public:
        Cube(int x, int y, int z)
            : x(x), y(y), z(z) {}

        int calcVolume() {
            return x*y*z;
        }
};

int main(){
    Cube CUBE_1(1,2,3); Cube CUBE_2(4,5,6); Cube* CUBE_PTR;
    
    CUBE_PTR = &CUBE_1;
    cout << "Volume of Cube 1 is " << CUBE_PTR->calcVolume() << endl;

    CUBE_PTR = &CUBE_2;
    cout << "Volume of Cube 2 is " << CUBE_PTR->calcVolume() << endl;
    
return 0;
}