#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int k;
    // cout<<1<<endl;
    for(auto i=1;i<=n;i++)
    {
       for(int j=1;j<=(n-i);j++)
       {
        cout<<" ";
       }
       k=1;
       for(int j=1;j<=i;j++)
       {
        cout<<k;
        k++;
       }

    int s=i-1 ;
     for(int j=1;j<=(i-1);j++)
     {
        cout<<s;
        s--;
     }
        cout<<endl;
    }

}