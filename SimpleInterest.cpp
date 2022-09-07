#include <iostream>
using namespace std;
int main() {
    // Bobandeep Singh - Roll No: 6164311
    // Simple interest program
    cout << "This program will calculate the Simple interest \n";
    double principle;
    int years;
    float rate = 9;
    cout << "Enter your principle amount: ";  
    cin >> principle;
    cout << "Enter the time in years: "; 
    cin >> years;
    
    float result = (principle * rate * years)/100;
    cout << "SI is: " << result << endl;
    return 0;
}
