#include <iostream>
using namespace std;

double getavg(int *arr, int size);

int main(){
    int ave[5] = {1,2,3,4,5};
    double avg;
    
    avg = getavg(ave,5);

    cout << "The average is: " << avg << endl;

return 0;
}

double getavg(int *arr, int size){
    int sum = 0;
    double avg;

    for (int i = 0; i < size; i++){
        sum = sum + arr[i]; 
    }
    avg = sum / size;
return avg;
}