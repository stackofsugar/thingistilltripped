#include <iostream>
#include <string>
using namespace std;

string str_pass(){
    string buffer;
    bool healthy;
    while(1){
        healthy = true;
        if(getline(cin, buffer)){
            for(size_t i = 0; i < buffer.size(); i++){
                if(buffer[i] == ' '){
                    healthy = false;
                    break;
                }
            }
            if(healthy){
                if(buffer.size() < 6){
                    cout << "Access codes needs to be atleast 6 characters! \n> ";
                }
                else {
                    return buffer;
                }
            }
            else {
                cout << "Access codes can have no spaces! \n> ";
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
    string strbuf;
    strbuf = str_pass();
}