/*
at n=5

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        // first half part
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<j<<" ";
        }

        for(int j=1;j<=(i-1);j++)
        cout<<"*"<<" ";

        // second half part
        for(int j=1;j<=(i-1);j++)
        cout<<"*"<<" ";

        for(int j=(n-i+1);j>0;j--)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }
    
}