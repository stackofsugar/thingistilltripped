#include <iostream>
using namespace std;

double arr[5] = {10.5, 53.2, 75.6, 47.3, 11.2};

double &setvalue(int i){
    return arr[i];
}

int main(){
    for (int i = 0; i<5; i++){
    cout << i+1 << ". " << arr[i] << endl;
    }

    setvalue (1) = 25.4;
    setvalue (3) = 15.4;

    for (int a = 0; a<5; a++){
    cout << a+1 << ". " << arr[a] << endl;
    }

return 0;
}