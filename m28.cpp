#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    cout << "Please Enter the marks of five subjects:\n";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500.0) * 100;

    if (percentage > 75) {
        grade = 'A'; 
    } else if (percentage >= 60) {
        grade = 'B'; 
    } else if (percentage >= 50) {
        grade = 'C';  
    } else if (percentage >= 40) {
        grade = 'D'; 
    } else {
        grade = 'E';
    }
    cout << "Total Marks      = " << total << endl;
    cout << "Average Marks    = " << total / 5 << endl;
    cout << "Marks Percentage = " << percentage << endl;
    cout << "Grade " << grade << endl;

    return 0;
}

