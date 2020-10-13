#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myAss;

    for (int i = 0; i <=20; i++){
        myAss.push_back(i);
    }

    for (const auto& dis : myAss){ // Use const ref if we just want to print
        cout << dis << " ";
    }
    cout << endl;

    for (auto& dis : myAss){       // Use ref if we want to modify the contents
        cout << dis << " ";
    }
    cout << endl;
}