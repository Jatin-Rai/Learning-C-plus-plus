#include <iostream>


using namespace std;

//Insertion of element in an array when it is full

int add_at_end(int arr[], int b[], int n, int freepos, int data)
{
    int i;
    for(i = 0;i<n;i++)
    {
        b[i] = arr[i];
    }
    b[freepos] = data;
    freepos++;
    return freepos;
}


int main()
{
    int arr[3], freepos, i, n;

    cout<< "Enter number of elements: ";
    cin>>n;
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    freepos = n;

    if(n == size)
    {
        int b[size+2];
        freepos = add_at_end(arr, b, size, freepos, 45);
        for(i=0;i<freepos;i++)
        {
            cout<<" "<<b[i];
        }
    }

    return 0;
}