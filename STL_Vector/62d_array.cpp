#include <iostream>
#include <vector>
using namespace std;

int main() {
    int g_studentNumber, // <- Number of student in the class
        g_input;
    cin >> g_studentNumber;

    // Input phase
    vector<vector<int>> student_class;
    vector<int> student_individuals;
    for (int i = 0; i < g_studentNumber; i++){
        for (int j = 0; j < 5; j++){
            cin >> g_input;
            student_individuals.push_back(g_input);
        }
        student_class.push_back(student_individuals);
        student_individuals.clear();
    }

    // Parse and calculate phase
    int temp_sum = 0;
    vector<int> student_sum;
    for (int i = 0; i < g_studentNumber; i++){ // Summing the array by its rows
        for (int j = 0; j < 5; j++){
            //temp_sum += student_class[i][j];
            temp_sum += student_class[i][j];
        }
        student_sum.push_back(temp_sum);      // temp_sum[0] is subject's grade
        temp_sum = 0;
    }

    int grade_moreThan = 0;
    for (int i = 1; i < g_studentNumber; i++){
        if (student_sum[i] > student_sum[0]){
            grade_moreThan++;
        }
        else {continue;}
    }
    
    cout << grade_moreThan << endl;
}