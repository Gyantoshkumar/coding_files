#include<bits/stdc++.h> 
using namespace std;
#define ll long long 


int main()
{
    int a[5];

    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]==4)
        {
            a[i]=0;
        }
    }
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}