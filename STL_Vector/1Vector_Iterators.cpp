/* begin() – Returns an iterator pointing to the first element in the vector
 * end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
 * rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
 * rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
 * cbegin() – Returns a constant iterator pointing to the first element in the vector.
 * cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
 * crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
 * crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end) 
 * 
 * tl;dr all these iterators always returns a pointer. so, always use auto keyword whenever u want to initiate a loop regarding vectors, and call it using "*"  
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vct;

    for (int i = 1; i <= 10; i++){      // Filling the vector with number 1 - 10
        vct.push_back(i);
    }
    
    cout << "Outputting the vector using begin and end: ";
    for (auto i = vct.begin(); i != vct.end(); ++i){
        cout << *i << " ";
    }

    cout << "\nOutputting the vector using cbegin and cend: ";
    for (auto i = vct.cbegin(); i != vct.cend(); ++i){
        cout << *i << " ";
    }
    
    cout << "\nOutputting the vector using rbegin and rend: ";
    for (auto i = vct.rbegin(); i != vct.rend(); ++i){
        cout << *i << " ";
    }

    cout << "\nOutputting the vector using crbegin and crend: ";
    for (auto i = vct.crbegin(); i != vct.crend(); ++i){
        cout << *i << " ";
    }

    cout << endl;

    return 0;
}