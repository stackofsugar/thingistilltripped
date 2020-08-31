#include <iostream>
using namespace std;

class Line {
    private:
    double length;

    public:
    Line(double len)
    : length(len) { 
        cout << "Initial length: " << length << endl;
    }
    void setlength(double len){
        length = len;
    }
    double getlength(){
        return length;
    }
};

int main(){
    Line line(10.0);
    cout << "The current length is: " << line.getlength() << endl;
    
    line.setlength(12.0);
    cout << "The current length is: " << line.getlength() << endl;

return 0;
}