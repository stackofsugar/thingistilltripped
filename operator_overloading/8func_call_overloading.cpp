#include <iostream> 
using namespace std;

class Length {
    private:
        int feet, inches;
    public:
        Length(int,int);
        void printLength();
        Length operator()(int,int,int);
};
Length::Length(int x = 0, int y = 0){
    feet = x; inches = y;
}
void Length::printLength(){
    cout << feet << " feet and " << inches << " inches." << endl;
}
Length Length::operator()(int a, int b, int c){
    feet = (feet + a) * c;
    inches = (inches * b) + 10; 
}

int main(){
    Length obj1(12,5), obj2;

    cout << "Value of Object 1 is: ";
    obj1.printLength();

    obj2 = obj1(10,12,41);

    cout << "Value of Object 1 after ";
}