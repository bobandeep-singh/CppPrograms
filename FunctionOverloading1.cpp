#include <stdio.h>
#include <iostream>
using namespace std;

// Cuboid = l*b*h
void volume(double l, double b, double h){
    cout << "Volume of cuboid is: " << l * b * h << endl;
}

// Cylinder = pi * r^2 * h
void volume(double h, double r){
    cout << "Volume of Cylinder is: " << 3.1416 * r * r * h << endl;
}

// Sphere = 1.732 * pi * r^3 / 4
void volume(double r){
    cout << "Volume of Cylinder is: " << 1.732 * 3.1416 * r * r * r / 4 << endl;
}

int main()
{
    volume(2,2,2);
    volume(2,2);
    volume(2);
    return 0;
}
