//introduction to pointer
#include <iostream>
using namespace std;

int main(){
    int var, *p;
    var = 250;
    p = &var;

    cout << "Value inside var is: " << var << endl;
    cout << "Memory address of var is:" << p << endl;
    cout << "Value of *p variable is: " << *p << endl; 
}