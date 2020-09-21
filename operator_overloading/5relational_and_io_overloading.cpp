#include <iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
        Distance(int, int);
        bool operator<(Distance&);
        friend ostream& operator<<(ostream&,const Distance&);
        friend istream& operator>>(istream&, Distance&);
};

Distance::Distance(int x = 0, int y = 0){
    feet = x; inches = y;
}
ostream& operator<<(ostream& out, const Distance& other){
    out << "The length of the object is " << other.feet << " feet and " << other.inches << " inches." << endl;
    return out;
}
istream& operator>>(istream& in, Distance& other){
    in >> other.feet >> other.inches;
    return in;
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


int main(){
    Distance obj1, obj2;
    
    cout << "Input details for object 1, feet and inches, respectively: ";
    cin >> obj1;
    cout << "And now, the object 2: ";
    cin >> obj2;

    // cin >> obj1 >> obj2;

    cout << obj1 << obj2 << endl;

    if(obj1 < obj2){
        cout << "Object 1 is smaller than object 2" << endl;
    } else {
        cout << "Object 1 is bigger than object 2" << endl;
    }

    return 0;
}