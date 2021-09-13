#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

// Insertion at the end of an array when the array is not full

int add_at_end(int arr[], int freepos, int data)
{
    arr[freepos] = data;
    freepos++;
    return freepos;
}


int main()
{
    int arr[10], freepos, i, n;

    cout<< "Enter number of elements: ";
    cin>>n;

    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    freepos = n;

    freepos = add_at_end(arr, freepos, 45);

    for(i = 0; i<freepos; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}