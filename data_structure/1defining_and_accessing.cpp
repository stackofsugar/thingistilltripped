#include <iostream>
#include <cstring>
using namespace std;

struct build{ // initializing and defining build structure
    char title[50];
    char author[100];
    char description[200];
    long unsigned int ident;
};

int main(){
    struct build build1; // declaring build 1 and 2 as member of build structure
    struct build build2;

    // specifying builds
    strcpy(build1.title, "Alienator");
    strcpy(build1.author, "Michael Raditya");
    strcpy(build1.description, "Simple c++ alien shooter game.");
    build1.ident = 652146524;

    strcpy(build2.title, "Prime Checker");
    strcpy(build2.author, "Christopher Digno");
    strcpy(build2.description, "An app that checks an integer whether it is a prime or not.");
    build2.ident = 652365478;

    //printing infos
    cout << "Build 1 Title: " << build1.title << endl;
    cout << "Build 1 Author: " << build1.author << endl;
    cout << "Build 1 Description: " << build1.description << endl;
    cout << "Build 1 Identification number: " << build1.ident << endl;  

    cout << "\nBuild 2 Title: " << build2.title << endl;
    cout << "Build 2 Author: " << build2.author << endl;
    cout << "Build 2 Description: " << build2.description << endl;
    cout << "Build 2 Identification number: " << build2.ident << endl;  

return 0;
}