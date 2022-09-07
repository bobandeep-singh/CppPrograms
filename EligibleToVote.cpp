#include <iostream>
using namespace std;
int main() {
    // Bobandeep Singh - Roll No: 6164311
    // Program to identify if a person is eligible to vote or not
    cout << "This program identifies if a person is eligible to vote or not \n";
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    
    if(age >= 18) cout << "You are eligible to vote." << endl;
    else cout << "You are not eligible to vote." << endl;
    return 0;
}
