#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main()
{
    int sum;
    int n,k;
    cin>>n>>k;

    if(n==1)
    cout<<k-1<<"\n";

    else if(n==2)
    cout<<(k-2)*(k-1)<<"\n";

    else if(n==3)
    cout<<((k-2)*(k-2)*(k-1))+(k-2)<<"\n";

    else if(n==4)
    cout<<((k-2)*(k-2)*(k-1)*(k-1))+2*(k-2)<<"\n";
    else if(n>4)
    {
        if(n%2==0)
        {
            sum=pow((k-2),(n/2))*pow((k-1),n/2)+n/2*(k-2);
            cout<<sum<<"\n";
        }
        else 
        {
         sum=pow((k-2),(n-n/2))*pow((k-1),n/2)+n/2*(k-2);
         cout<<sum<<"\n";
        }
      
    }
}