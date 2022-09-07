#include <iostream>
using namespace std;

class Square{
    int side;
    int area;
    int circumference;
    
    public:
    void setSide(int s){
        side = s;
		area = side * side;
		circumference = side * 4;
    }
    
    friend class Student;
};

class Student{
    public:
    void printSquare(Square sq){
        cout << "circumference = " << sq.circumference;
        cout << "\narea = " << sq.area;
    }
};

int main() {
    // Bobandeep Singh - Roll No: 6164311
    Square sq;
    sq.setSide(2);
    
    Student s;
    s.printSquare(sq);
    
    return 0;
}
