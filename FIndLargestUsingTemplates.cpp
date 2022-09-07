#include <iostream>
using namespace std;

template <class T1, class T2, class T3>

void findLargestFromThree(T1 t1, T2 t2, T3 t3){
    if(t1 >= t2 && t1 >= t3){
        cout << "Greatest is: " << t1 << endl;
    } else if(t2 >= t1 && t2 >= t3){
        cout << "Greatest is: " << t2 << endl;
    } else{
        cout << "Greatest is: " << t3 << endl;
    }
}

int main() {
    cout << "Finding largest from 50.8, 566, 900" << endl;
    findLargestFromThree(50.8, 566, 900);
    
    cout << "Finding largest from b, g, a" << endl;
    findLargestFromThree('b', 'g', 'a');
    return 0;
}
