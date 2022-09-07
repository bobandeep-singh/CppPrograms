#include <iostream>
using namespace std;
int main() {
    cout << "Program to print 2-D array" << endl;
    int x[2][2];
    cout << "Please enter 2X2 matrix \n";
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            cout << "Please input: " << i << ", " << j << "\n";
            cin >> x[i][j];
        }
    }
    for(int i=0; i < 2; i++){
        cout << "\n";
        for(int j=0; j < 2; j++){
            cout << x[i][j] << " ";
        }
    }
    return 0;
}
