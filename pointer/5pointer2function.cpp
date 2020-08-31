// C++ allows you to pass a pointer to a function. To do so, simply declare the function parameter as a pointer type.
#include <iostream>
#include <ctime>
using namespace std;

void getsecond(unsigned long *par);

int main(){
    unsigned long sec;
    getsecond(&sec);

    cout << "The number of seconds right now is: " << sec << endl;

return 0;
}

void getsecond(unsigned long *par){
    *par = time (NULL);
return;
}