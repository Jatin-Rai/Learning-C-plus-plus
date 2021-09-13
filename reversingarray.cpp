#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// void reversedarray(int array[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = array[start];
//         array[start] = array[end];
//         array[end] = temp;
//         start++;
//         end--; 
//     }
// }


//reversing array using recursion

void reversedarray(int array[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;

    reversedarray(array, start+1, end-1);
    
}


void printarray(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<", ";
    }
    cout<<endl;
}


int main ()
{
    int array[5] = {1,2,3,4,5};

    int n = sizeof(array)/sizeof(array[0]);

  
    cout<<"Given array..."<<endl;
    printarray(array, n);

    reversedarray(array, 0, n-1);

    cout<<endl<<"Reversed Array..."<<endl;
    printarray(array, n);
    cout<<endl;

    return 0;
}