// Finds 2 prime composite of a number 
#include <iostream>
using namespace std;

int main(){
    const int table[]{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149};
    ulong number, result;

    cout << "Throw in that number here: ";
    cin >> number;

    for (int i = 0; i < 37; i++){
        for (int j = i; j < 37; j++){
            result = table[i] * table[j];
            if (result == number){
                cout << "The prime composite is " << table[i] << " and " << table[j] << endl;
                return 0;
            }
        }
    }

    cerr << "Prime composite not found!" << endl;
}