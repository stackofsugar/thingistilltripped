#include <iostream>
using namespace std;

int main() {
    ulong x(0),y(0),z(1),iteration;
    cout << "How many Fibonacci iterations do you want to perform? ";
    cin >> iteration;
    

    for (int i = 0; i < iteration; i++){
        cout << x << " ";
        x = y + z;
        z = y;
        y = x;
    }

    cout << endl;
}