#include <iostream>
#include <vector>
using namespace std;

int main() {
    int g_query,
        g_arrayCount,
        make_arrayIterator,
        make_arrayInput;
    vector<vector<int>> col; // <- main column

    cin >> g_query >> g_arrayCount;

  //  cout << "test";

    // Array make section
    for (int i = 0; i < g_arrayCount; i++){
        cin >> make_arrayIterator;
   //     cout << "after iterator";
        vector<int> row;
        for (int t = 0; t < make_arrayIterator; t++){
   //         cout << "inputarray";
            cin >> make_arrayInput;
            row.push_back(make_arrayInput);
        }
        col.push_back(row);
    }

    int acc_getArray,
        acc_getIndex;

    // Array access section
    for (int i = 0; i < g_query; i++){
        cin >> acc_getArray >> acc_getIndex;
        cout << col[acc_getArray][acc_getIndex] << endl;
    }

}

/*
 * 2D Vector Breakdown
 * Assume 2 vectors each contains 1,2,3,4,5
 *  
 *   row1 -> 1 2 3 4 5
 *   row2 -> 1 2 3 4 5
 *  main col ^
 * 
 * declaring main col as vector<vector<int>> col
 */