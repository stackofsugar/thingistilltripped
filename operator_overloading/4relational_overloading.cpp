#include <iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
        Distance(int, int);
        void displayDistance();
        bool operator>(Distance&);
};

Distance::Distance(int x = 0, int y = 0){
    feet = x; inches = y;
}
bool Distance::operator>(Distance& other){
    if(inches < other.inches){
        return true;
    }
    if(inches == other.inches && feet < other.feet){
        return true;
    }
    return false;
}
void Distance::displayDistance(){
    cout << "The length of the measurement is " << feet << " feet " << inches << " inches." << endl;
}

int main(){
    
}