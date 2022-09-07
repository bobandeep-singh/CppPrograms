#include <iostream>
using namespace std;
int main() {
     //Bobandeep Singh - Roll No: 6164311
    // Even or Odd program
    cout << "This program will check if the number is odd or even \n";
    int number;
    
    cout << "Please enter the number: ";
    cin >> number;
    
    if(number % 2 == 0) cout << "The number is even: " << number << endl;
    else cout << "The number is odd: " << number << endl;
    return 0;
}
