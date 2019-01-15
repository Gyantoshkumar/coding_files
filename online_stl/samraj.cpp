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
    if(n==2)
    {
      sum=v[0]^v[1]; 
    }
    else if(n==3)
    {
         sum=(v[0]^v[1])+v[2];
    }
    else if(n>3 && n<=5)
    {
        int m1=(v[0]^v[1])+v[2];
        int m2=(v[1]^v[2])+v[3];
        int m3=(v[2]^v[3])+v[4];

         sum=max(m1,max(m2,m3));  

    }
    else if(n==6)
    {
        int m1=(v[0]^v[1])+v[2];
        int m2=(v[1]^v[2])+v[3];
        int m3=(v[2]^v[3])+v[4];
        int m4=(v[3]^v[4])+v[5];
        int m5=(((((v[0]^v[1])+v[2])| v[3])^ v[4])+ v[5]);

        sum=max(m1,max(m2,max(m3,max(m5,m4))));

    }

    if(sum%2==0)cout<<"Even\n";
    else
    cout<<"Odd\n";
    
    
    }
   return 0; 
  

}