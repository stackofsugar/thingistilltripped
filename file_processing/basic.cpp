#include <iostream>
#include <fstream>
#include <limits>
#include <string>
using namespace std;
#define cleanbuf() cin.ignore(numeric_limits<streamsize>::max(), '\n')

int main(){
    string filename = "basic.dat",
           data;

    fstream file;
    file.open(filename, ios::out);

    if(!(file.is_open()) || !(file.good())){
        cerr << "File can't be opened! \n";
        return 1;
    }

    cout << "Try to type something (put EOF to end): \n";
    while(cin){
        getline(cin, data);
        file << data << "\n";
    }
    file.close();
}