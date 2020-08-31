#include <iostream>
#include <ctime>
using namespace std;

int *getrand(){
    int r[10];
    srand((unsigned)time(NULL));
    for (int i=0; i<10;i++){
        r[i] = rand();
    }
return r;
}

int main(){
    int *p;

    p = getrand();

    for (int i=0; i<10; i++){
        cout << *(p + i) << endl;
    }
return 0;
}

