#include <stdio.h>
#include <iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
        void addData(int f, int i){
            feet = f;
            inches = i;
        }
        void printValues(){
            cout << "Feet: " << feet << endl;
            cout << "Inches: " << inches << endl;
        }
        // Distance operator+(Distance& d){
        //     Distance sum;
        //     sum.feet = this -> feet + d.feet;
        //     sum.inches = this -> inches + d.inches;
        //     cout << "Feet: " << sum.feet << endl;
        //     cout << "Inches: " << sum.inches << endl;
        //     return sum;
        // }
        Distance operator+(Distance& d);
};

Distance Distance :: operator+(Distance& d){
    Distance sum;
    sum.feet = this -> feet + d.feet;
    sum.inches = this -> inches + d.inches;
    return sum;
}

int main() {
	Distance d1;
    d1.addData(1,2);
    d1.printValues();
    
    Distance d2;
    d2.addData(1,2);
    d2.printValues();
    
    Distance d3;
    d3 = d1 + d2;
    d3.printValues();
	return 0;
}
