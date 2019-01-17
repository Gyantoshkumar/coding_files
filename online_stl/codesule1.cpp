#include<bits/stdc++.h> 
using namespace std;
#define ll long long



int main()
{
    int sum;
    int t;
    cin>>t;
    while(t--)
    { 
      int n;
      cin>>n;
      vector<ll>v(n);
      for(int i=0;i<n;i++)
       {
         cin>>v[i];
       }
       if(n==1)
       cout<<v[0]<<"\n";
       else if(n==2)
       {
         sum=max(v[0],max(v[1],v[0]^v[1]));
       }
       else
       {
       sort(v.begin(),v.end());
       sum=v[n-3]^v[n-2]+v[n-1];
       }
       if(sum%2==0)
       cout<<"Even\n";
       else
       cout<<"Odd\n";

    }

}
