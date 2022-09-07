#include <iostream>
using namespace std;
int main() {
	// Bobandeep Singh - Roll No: 6164311
    int arr[10];
    int a = -1;
    try
    {
        int i;
        for(i=0; i < 9; i++){
            arr[i] = i;
        }
        a = arr[12];
        if(a < 0 || a > 9){
            cout << "Exception out of range occurred ..." << endl;
            throw a;
        }
    }
    catch (int e)
    {
        cout << "In Catch block - Exception out of range occurred ..." << endl;
    }
    catch (...)
    {
        cout << "Unknown Exception occured..." << endl;
    }
    return 0;
}
