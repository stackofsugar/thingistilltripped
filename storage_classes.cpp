/*
Register storage class
to tell a machine to store a variable to be stored in a register (which is a high speed storage inside the computers cpu) instead of ram, so the maximum 
size is of the size of the register itself and they can't contain references because they don't have memory location. it usually used in high speed access 
such as counters.

Static storage class
Tells the compiler to mantain a variable for the extent of the program's life, instead of destroying and reestablishing every change of scope.

Extern storage class
Gives a reference to a global variable that can be seen by all the program files. 
tl;dr: lu bikin 2 cpp file, but a variable an be heard and used between those 2 files.

example for static:
*/

#include <iostream>
using namespace std;

void func(void);

static int count = 10;

int main(){
    while(count--){
        func();
    }
return 0;
}

void func(void){
    static int i = 5;
    i++;
    cout << "i is " << i << " while count is " << count << endl;
}

/*
if NOT using static:
i is 6 while count is 9
i is 6 while count is 8
i is 6 while count is 7
i is 6 while count is 6
i is 6 while count is 5
i is 6 while count is 4
i is 6 while count is 3
i is 6 while count is 2
i is 6 while count is 1
i is 6 while count is 0

if USING static:
i is 6 while count is 9
i is 7 while count is 8
i is 8 while count is 7
i is 9 while count is 6
i is 10 while count is 5
i is 11 while count is 4
i is 12 while count is 3
i is 13 while count is 2
i is 14 while count is 1
i is 15 while count is 0
*/