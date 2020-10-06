#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int compare;

    if (argc > 4){                                      // To throw an error and exits the program if the argument is more than 3
        cerr << "Too many arguments!" << endl;
        return 0;
    }

    for (int i = 1; i < 5; i++){                        // loop to find the -o flag
        compare = strcmp(argv[i], "-o");                // if we found the -o flag, compare will be 0
        if (compare == 0){                              // code for the -o argument
            cout << "num" << endl;
            break;
        }
    }

}