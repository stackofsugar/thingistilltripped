/*A destructor is a special member function of a class that is executed whenever an object of 
it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

A destructor will have exact same name as the class prefixed with a tilde (~) and it can neither 
return a value nor can it take any parameters. Destructor can be very useful for releasing resources 
before coming out of the program like closing files, releasing memories etc. */

#include <iostream>
using namespace std;

class Line {
    private:
    double length;

    public:
    Line(){
        cout << "The object is being constructed" << endl;
    }
    ~Line(){
        cout << "The object is being destructed " << endl;
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