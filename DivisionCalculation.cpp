/*
If percentage is < 40% => 3rd division, 40% to 70% => 2nd division, and above 70% => 1st division
*/
#include <iostream>
using namespace std;
int main() {
    // Bobandeep Singh - Roll No: 6164311
    float marks_obtained = 0;
    float total_marks = 0;
    cout << "Please enter marks obtained: " << endl;
    cin >> marks_obtained;
    cout << "Please enter total marks: " << endl;
    cin >> total_marks;
    
    cout << "Marks obtained: " << marks_obtained << " and total marks: " << total_marks << endl;
    
    double percentage = (marks_obtained/total_marks) * 100;
    cout << "Your percentage is: " << percentage << endl;
    
    if(percentage < 40){
        cout << "You have 3rd division" << endl;
    } else if(percentage > 40 && percentage <= 70){
        cout << "You have 2nd division" << endl;
    } else {
        cout << "You have 1st division" << endl;
    }
    
    return 0;
}
