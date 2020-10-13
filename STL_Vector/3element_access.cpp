/* reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
 * at(g) – Returns a reference to the element at position ‘g’ in the vector
 * front() – Returns a reference to the first element in the vector
 * back() – Returns a reference to the last element in the vector 
 * data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for (int i = 1; i <= 10; i++){
        v.push_back(i);
    }

    for (auto& i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << "v[5]: " << v[5]
         << "\nv.at(5): " << v.at(5)
         << "\nv.front(): " << v.front()
         << "\nv.back(): " << v.back() << endl;

    int* posptr = v.data();
    cout << "Pointer to first data *(v.data): " << *posptr << endl;
}