#include <iostream>
#include <stdio.h>

using namespace std;

// structures example
// Passing structure member as atguments

// struct student
// {
//     char name[50];
//     int age;
//     int roll_no;
//     float percentage;
// };

// void print(char name[], int age, int roll, float percentage) {
//     cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Roll No.: "<<roll<<endl<<"Percentage: "<<percentage<<endl<<endl;
// }

//---------------------------------------------------------------------------

// // call by reference example

// struct charset
// {
//     char s;
//     int i;

// };

// void keyValue(char* s, int* i) {
//     cout<<"Enter the character: ";
//     cin>>*s;
//     cout<<"Enter the code to be assigned to "<<*s<<": ";
//     cin>>*i;
// }

//---------------------------------------------------------------------------

//passing structure variable as arguments

struct point
{
    int x;
    int y;
};

//---------------------------------------------------------------------------

//Returning a structure variable from the function

// struct point edit(point p)
// {
//     (p.x)++;
//     p.y = p.y + 5;

//     return p;
// };

// void printPoint(point p)
// {
//     cout << "x: " << p.x << " y: " << p.y << endl;
// }
//---------------------------------------------------------------------------

//print function for passing pointers to structures as arguments

// void printPoint(point *p)
// {
//     cout << "x: " << p->x << " y: " << p->y << endl;
// }

//---------------------------------------------------------------------------


// Returning a pointer to a structure from the function

// struct point* fun(int a, int b)
// {
//     point *ptr = (point *)malloc(sizeof(point));

//     ptr->x = a;
//     ptr->y = b + 5;

//     return ptr;
// };

// void print(point *ptr)
// {
//     cout<<"x: "<<ptr->x<<" y: "<<ptr->y<<endl;
// }

//---------------------------------------------------------------------------    

// passing array of structures as arguments 

void print(point arr[])
{
    for (int i = 0; i < 2; i++)
    {
    cout<<"x: "<<arr[i].x<<" y: "<<arr[i].y<<endl;
    }
    
}


//---------------------------------------------------------------------------


int main()
{

    // //passing structure members as arguments

    // student s = {"Jatin", 24, 7, 65.06};
    // print(s.name,s.age,s.roll_no,s.percentage);

    //---------------------------------------------------------------------------

    // //call by reference example output

    // charset cs;
    // keyValue(&cs.s,&cs.i);
    // cout<<"The code of the character "<<cs.s<<" is "<<cs.i<<endl<<endl;

    //---------------------------------------------------------------------------


    // point p1 = {23, 45};
    // point p2 = {56, 90};

    //---------------------------------------------------------------------------

    // passing structure variable as arguments

    // printPoint(p1);
    // printPoint(p2);

    //---------------------------------------------------------------------------

    // passing pointers to structures as arguments

    // printPoint(&p1);
    // printPoint(&p2);

    //---------------------------------------------------------------------------

    //Passing a structure variable to the function

    // p1 = edit(p1);
    // p2 = edit(p2);

    // printPoint(p1);
    // printPoint(p2);

    //---------------------------------------------------------------------------    

    // passing a pointer to a structure to the function

    // point *ptr1, *ptr2;

    // ptr1 = fun(2,3);
    // ptr2 = fun(6,9);

    // print(ptr1);
    // print(ptr2);

    // free(ptr1);
    // free(ptr2);

    //---------------------------------------------------------------------------    

    // passing array of structures as arguments 


    point arr[2] = {{2,4},{3,6}};

    print(arr);

    return 0;
}
