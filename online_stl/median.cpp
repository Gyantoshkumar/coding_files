#include<bits/stdc++.h> 
using namespace std;
#define ll long long 

int median(int v1[],int v2[],int p) 
{
    //cout<<"Hello world\n";
    //cout<<2*p;
    int i=0;
    int j=0;
    int v3[2*p];
    int k=0;

    while(k<=2*p)
    {
        if(v1[i]<=v2[j])
        {
            v3[k]=v1[i];
            i++;
            k++;
        }
        else
        {
            v3[k]=v2[j];
            j++;
            k++;
        }
     }

     //return 6;
     cout<<v3[p-1];
}


int main()
{
    int n;
    cin>>n;
    int v1[n],v2[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    median(v1,v2,n);

    return 0;
}