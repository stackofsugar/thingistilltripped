#include <iostream>
using namespace std;

int main(){
    int *p = NULL;
    
    cout << "The value of ptr is: " << p << endl;

    if(!p){
        cout << "Pointer is NULL" << endl;
    } else {
        cout << "Pointer is not NULL" << endl;
    }
}