#include<bits/stdc++.h> 
using namespace std;
#define ll long long 

int lcm_(int n1,int n2)
{
   int  hcf = n1;
   int  temp = n2;
   int lcm;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;

    return lcm;
}


int main()
{
    ll n,a,b;
    ll p=0;
    ll t;
    cin>>t;

    while(t--)
    {
    ll count=0; 
    int flag=0;
    ll test=0;
    cin>>n>>a>>b;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }   
      if(a==b)
      {
      cout<<"BOB\n";
      }
      else
      {  
          for(ll i=n-1;i>=0;i--)
          {
              if(v[i]!=0)
              {
                 if(v[i]%(lcm_(a,b))==0)
                {
                  v[i]=0;
                  count++;
                 }
              }
          }
           for(ll i=n-1;i>=0;i--)
          {
              if(v[i]!=0)
              {
                 if(v[i]%b==0)
                {
                  flag++;
                }
                if(v[i]%a==0)
                {
                    count++;
                }
              }
          }

          if(count>flag)
           { 
             cout<<"BOB\n";
           }    
           else if(count==0)
          {
             cout<<"BOB\n"; 
          }  
          else
           {
               cout<<"ALICE\n";
           }
      }
    }
    return 0;
}