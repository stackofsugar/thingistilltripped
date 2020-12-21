#include <iostream>
#include <fstream>
#include <limits>
#include <string>
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

void load_data(list<string>& item){
    item.push_back("Haloo");
    item.push_back("Duniaa");
}

int main(){
    fstream file("testing.txt");
    string buffer;
    int ba, bb;

    while(file >> ba >> bb){
        cout << ba << " - " << bb << '\n';
    }
}