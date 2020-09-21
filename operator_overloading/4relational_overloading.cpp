#include <iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
        Distance(int, int);
        void displayDistance(const char*);
        bool operator<(Distance&);
};

Distance::Distance(int x = 0, int y = 0){
    feet = x; inches = y;
}
bool Distance::operator<(Distance& other){
    if(feet < other.feet){
        return true;
    }
    if(feet == other.feet && inches < other.inches){
        return true;
    }
    return false;
}
void Distance::displayDistance(const char* other){
    cout << "The length of the " << other << " is " << feet << " feet " << inches << " inches." << endl;
}

int main(){
    Distance obj1(10,11), obj2(10,10);
    obj1.displayDistance("Object 1"); obj2.displayDistance("Object 2");
    if(obj1 < obj2){
        cout << "Object 1 is smaller than object 2" << endl;
    } else {
        cout << "Object 1 is bigger than object 2" << endl;
    }

    return 0;
}