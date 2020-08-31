#include <iostream>
using namespace std;

const int MAX = 3;
int main(){
    int var[MAX] = {1,2,3};
    int *pa, *pb, *pc;
    // ====================
    pa = var;
    for(int i=0; i < MAX; i++){
        cout << "The address of var[" << i << "] is: " << pa << endl;
        cout << "The value of var[" << i << "] is: " << *pa << endl;
        pa++;
    }
    //=====================
    pb = &var[MAX-1];
    for(int a = MAX; a > 0; a--){
        cout << "The address of var [" << a << "] is: " << pb << endl;
        cout << "The value of var [" << a << "] is: " << *pb << endl;
        pb--;
    }
    //=====================
    pc = var;
    int b = 0;
    while(pc <= &var[MAX-1]){
        cout << "The address of var [" << b << "] is: " << pc << endl;
        cout << "The value of var [" << b << "] is: " << *pc << endl;
        pc++;
        b++;
    }
return 0;
}