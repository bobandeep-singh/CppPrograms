#include <iostream>
using namespace std;
int main() {
	// Bobandeep Singh - Roll No: 6164311
    int n = 9;
    int i, j, k = n;
    cout << "Pyramid:" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j >= k) cout << "* ";
            else cout << " ";
        }
        k--;
        cout << endl;
    }
    return 0;
}
