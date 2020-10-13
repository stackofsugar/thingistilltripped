/*
 * size() – Returns the number of elements in the vector.
 * max_size() – Returns the maximum number of elements that the vector can hold.
 * capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
 * resize(n) – Resizes the container so that it contains ‘n’ elements.
 * empty() – Returns whether the container is empty.
 * shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
 * reserve() – Requests that the vector capacity be at least enough to contain n elements. 
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vct;

    for (int i = 1; i <= 10; i++){
        vct.push_back(i);
    }

    cout << "Size: " << vct.size()
         << "\nCapacity: " << vct.capacity()
         << "\nMax size: " << vct.max_size() << endl;

    cout << "The vector elements before resizing are: ";
    for (auto i = vct.begin(); i != vct.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    vct.resize(5);
    vct.shrink_to_fit();

    cout << "Size after resizing: " << vct.size() << endl;

    if (vct.empty()){
        cout << "The vector is empty" << endl;
    }
    else {
        cout << "The vector is not empty" << endl;
    }

    cout << "The vector elements are: ";
    for (auto i = vct.begin(); i != vct.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}