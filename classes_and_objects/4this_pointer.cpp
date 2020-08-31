#include <iostream>
using namespace std;

class Cube {
    private:
        int x, y, z;
    public:
        Cube(int x, int y, int z)
            : x(x), y(y), z(z) {}
        int setVolume(){
            return x * y * z;
        }
        int compareCube(Cube cube){
            return this->setVolume() > cube.setVolume();
        }
        
};

int main(){
    int C1_X, C1_Y, C1_Z, C2_X, C2_Y, C2_Z;

    cout << "\nEnter desired cube properties \n\nInstruction: \ninput Cube1's x,y,z, then Cube2's x,y,z, respectively \nYour value here:";
    cin >> C1_X >> C1_Y >> C1_Z >> C2_X >> C2_Y >> C2_Z;
    cout << "\n==Result==\n";

    Cube CUBE_1(C1_X, C1_Y, C1_Z); Cube CUBE_2(C2_X, C2_Y, C2_Z);
    
    if (CUBE_1.compareCube(CUBE_2)){
        cout << "Cube 1 is larger than Cube 2\n" << endl;
    } else {
        cout << "Cube 2 is equal or larger than Cube 1\n" << endl;
    }
return 0;
}