#include <iostream>
using namespace std;

const int SIZE = 10;

class Array {
    private:
        int a[SIZE];
    public:
        Array();
        void displayArray();
        int& operator[](int i);
};
Array::Array(){
    for(int i = 0; i < SIZE; i++){
        a[i] = i;
    }
}
int& Array::operator[](int i){
    if (i > SIZE){
        cerr << "Invalid value!" << endl;
        return a[0];
    }
    return a[i];
}
void Array::displayArray(){
    for(int c = 0; c < SIZE; c++){
        cout << c + 1 << ": " << a[c] << endl;
    }
}

int main(){
    Array obj1;

    obj1.displayArray();

    obj1[5] = 99;
    cout << "Modifying element number 5..." << endl;

    cout << "Displaying value 5: " << obj1[5] << endl; 

    return 0;
}