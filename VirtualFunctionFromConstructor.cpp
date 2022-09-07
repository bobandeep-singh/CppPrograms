#include <stdio.h>

class A
{
public:
    A() {
        intermediate_call();
    }
    void intermediate_call() {
        // Bad: virtual function call during object construction
        virtual_function();
    }
    virtual void virtual_function() {
        printf("A::virtual_function called\n");
    }
    virtual ~A() {
    }
};

class B : public A
{
public:
    // override virtual function in A
    void virtual_function()
    {
        printf("B::virtual_function called\n");
    }
};

int main(int argc, char **argv) {
	// Bobandeep Singh - Roll No: 6164311
    B myObject;
    myObject.virtual_function();
}
