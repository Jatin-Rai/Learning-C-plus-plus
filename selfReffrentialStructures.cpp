#include<iostream>
#include<stdio.h>

using namespace std;

// This is an example code for self referential structures
// Self referential structures are very useful in linked list data structures

struct code
{
    int i;
    char c;
    code *ptr;
};


int main()
{
    code var1;
    code var2;

    var1.i = 1;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.i = 2;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2;

    cout<<var1.ptr->i<<" "<<var1.ptr->c<<endl;

    return 0;
}