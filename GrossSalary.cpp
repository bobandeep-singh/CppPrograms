#include <iostream>
using namespace std;
int main() {
    // Bobandeep Singh - Roll No: 6164311
    // Gross salary program
    cout << "This program will calculate your gross salary \n";
    double base;
    float ta;
    float da;
    float hra;
    
    cout << "Enter your base salary: ";
    cin >> base;
    cout << "Enter your TA percentage: ";
    cin >> ta;
    cout << "Enter your DA percentage: ";
    cin >> da;
    cout << "Enter your HRA percentage: ";
    cin >> hra;
    
    long double grossSalary = base + (base * (ta+da+hra) / 100);
    cout << "Your gross salary is: " << grossSalary << endl;
    return 0;
}
