#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> strvec;
    fstream strfile;
    string filename;

    strfile.open(filename, ios::out);

    if(!(strfile.is_open()) || !(strfile.good())){
        cerr << "File cannot be opened \n";
    }
    else {
        
    }
}