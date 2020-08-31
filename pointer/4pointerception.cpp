#include <iostream>
using namespace std;

int main(){
    int var, *p, **pp;
    var = 3200;
    p = &var;
    pp = &p;

    cout << "The value of var is: " << var << endl;
    cout << "The value of *p is: " << *p << endl;
    cout << "The value of **pp is: " << **pp << endl;

return 0;
}