#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Basics of pointers

int main()
{

    int a = 3;
    int *b = &a;

    // & ---> (Address of) operator
    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;

    // * --> Dereference operator
    cout << "The value of a is " << *b << endl;

    // Pointer to pointers
    int **c = &b;

    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value of c is " << *c << endl;
    cout << "The value of value_at(value_at(c)) is " << **c << endl;

    return 0;
}