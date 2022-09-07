#include <stdio.h>
#include <iostream>
using namespace std;

class Box{
    private:
        double length, breadth, height;
    public:
        void setBox(int l, int b, int h){
            length = l;
            breadth = b;
            height = h;
        }
        void showBox(){
            cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
        }
        
        friend Box operator+(Box b1, Box b2);
};

Box operator+(Box b1, Box b2){
    Box b3;
    b3.length = b1.length + b2.length;
    b3.breadth = b1.breadth + b2.breadth;
    b3.height = b1.height + b2.height;
    return b3;
}

int main() {
    // Bobandeep Singh - Roll No: 6164311
    Box box1;
    box1.setBox(1, 2, 3);
    box1.showBox();
    
    Box box2;
    box2.setBox(3, 2, 1);
    box2.showBox();
    
    cout << "Sum of the boxes:" << endl;
    Box box;
    box = box1 + box2;
    box.showBox();
	return 0;
}
