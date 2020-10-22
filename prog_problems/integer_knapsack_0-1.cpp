#include <iostream>
#include <vector>
using namespace std;

void puttingVector(vector<int>&,int,string);

int main() {
    int g_K, // kapasitas maksimal knapsack
        g_n; // jumlah item input

    cout << "n = ";
    cin >> g_n;
    cout << "K = ";
    cin >> g_K;

    vector<int> pi; // alokasi vektor untuk menyimpan nilai pi
    puttingVector(pi,g_n,"pi");

    vector<int> wi; // alokasi vektor untuk menyimpan nilai wi
    puttingVector(wi,g_n,"wi");

    vector<vector<int>> copy_vector(g_n); // alokasi vektor 2d (sebagai baris, pi wi)

    // alokasi vektor data kolom
    for (int i = 0; i < g_n; i++){
        
    }
}

// puttingVector(vector_anda, banyak_input, nama_konteks_input)
void puttingVector(vector<int>& vector, int iteration, string unspaced_name){
    cout << unspaced_name << ": ";
    int temp_data;
    for (int i = 0; i < iteration; i++){
        cin >> temp_data;
        vector.push_back(temp_data);
    }
}