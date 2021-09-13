#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main() {

    int n, q, size,value, which, index;
    
    cout<<"Enter no. of arrays: ";
    cin>>n;
    cout<<"Enter no. of queries: ";
    cin>>q;
    cout<<endl;
    
    vector<vector<int>> nvec;
    
    for(int i = 0; i< n; i++)
    {
        cout<<endl<<"Enter your preferred array size: ";
        cin>>size;
        cout<<endl;
        vector<int> ivec;
        
        for(int j = 0; j < size; j++)
        {
            cout<<"Enter values of array in the matrix ["<<i<<"] ["<<j<<"]: ";
            cin>>value;
            ivec.push_back(value);
            
        }
        
        nvec.push_back(ivec);
    }
    
    for(int k = 0; k < q; ++k)
    {
        cout<<endl<<"Which array do you want to check(starts from 0)?: ";
        cin>>which;
        cout<<"Enter the index of which the value is to be checked: ";
        cin>>index;
        cout<<endl<<"The value in the array "<<which<<" of index "<<index<<" is "<<nvec[which][index]<<endl;
    }
    
    
    
    return 0;
}