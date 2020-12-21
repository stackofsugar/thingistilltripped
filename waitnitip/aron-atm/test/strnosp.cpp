#include <iostream>
#include <utility>
#include <fstream>
#include <string>
#include <limits>
#include <list>
using namespace std;

template<typename Ty>
Ty input(Ty floor = 0, Ty ceil = numeric_limits<Ty>::max()){
    Ty buffer;
    while(1){
        if(cin >> buffer){
            if(buffer < floor){
                cout << "Your input was too small! Try again: ";
            } else if(buffer > ceil){
                cout << "Your input was too big! Try again: ";
            } else {
                return buffer;
            }
        } else {
            cout << "Invalid input! Please try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }
}

string str_nosp(){
    string buffer;
    bool healthy;
    while(1){
        healthy = true;
        if(getline(cin, buffer)){
            for(string::size_type i = 0; i < buffer.size(); i++){
                if(buffer[i] == ' '){
                    healthy = false;
                    break;
                }
            }
            if(healthy){
                return buffer;
            }
            else {
                cout << "No spaces allowed! \n";
            }
        } 
        else {
            cout << "Invalid input! Please try again: ";
            cin.clear();
            cin.ignore();
        }
    }
}

int main(){
    string test;
    test = str_nosp();
    cout << test << '\n';
}