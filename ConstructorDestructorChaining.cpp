#include <stdio.h>
#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "A C" << endl;
        }
        ~A(){
            cout << "A D" << endl;
        }
};

class B : public A{
    public:
        B(){
            cout << "B C" << endl;
        }
        ~B(){
            cout << "B D" << endl;
        }
};

class C : public B{
    public:
        C(){
            cout << "C C" << endl;
        }
        ~C(){
            cout << "C D" << endl;
        }
};

int main()
{
    C c;
    return 0;
}
