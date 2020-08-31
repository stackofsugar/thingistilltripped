#include <iostream>
#include <cstring>
using namespace std;

struct build{ // initializing and defining build structure
    char title[50];
    char author[100];
    char description[200];
    long unsigned int ident;
};

void printstruct(struct build build);

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
    
    printstruct(build1);
    cout << "\n"; 
    printstruct(build2);

return 0;
}

void printstruct(struct build build){
    cout << "Build Title: " << build.title << endl;
    cout << "Build Author: " << build.author << endl;
    cout << "Build Description: " << build.description << endl;
    cout << "Build Identification number: " << build.ident << endl; 
}