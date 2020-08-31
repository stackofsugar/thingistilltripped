#include <iostream>
using namespace std;

class Line {
    private:
    double length;

    public:
    Line(){
        cout << "The object is being constructed" << endl;
    }
    void setlength(double len){
        length = len;
    }
    double getlength(){
        return length;
    }
};

int main(){
    Line line;
    line.setlength(2.0);

    cout << "The length of the line is: " << line.getlength() << endl;
}