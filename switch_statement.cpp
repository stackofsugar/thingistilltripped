#include <iostream>
using namespace std;

int main(){
    char choice;
    cout << "Choose any letter in the Alphabet: " << flush;
    cin >> choice;

    switch(choice){
        case 'A' :
        cout << "You have chosen " << "A" << endl;
        break;
        case 'B' :
        cout << "You have chosen " << "B" << endl;
        break;
        case 'C' :
        cout << "You have chosen " << "C" << endl;
        break;
        case 'D' :
        cout << "You have chosen " << "D" << endl;
        break;
        case 'E' :
        cout << "You have chosen " << "E" << endl;
        break;
        case 'F' :
        cout << "You have chosen " << "F" << endl;
        break;
        case 'G' :
        cout << "You have chosen " << "G" << endl;
        break;
        
        default :
        cout << "INVALID" << endl;
    }
return 0;
}