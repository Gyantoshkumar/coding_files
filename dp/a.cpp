#include<bits/stdc++.h> 
using namespace std;
#define ll long long 

int main()
{
   ll n,x,y;
   ll count=0;
   cin>>n>>x>>y;
   vector<ll> v(n);

   for(ll i=0;i<n;i++)
   {
       cin>>v[i];
   }

    if(x>y)
    cout<<n<<"\n";
    else 
    {
        for(ll i=0;i<n;i++)
        {
            if(v[i]<=x)
            {
                count++;    
            }
            else
            {
                break;
            }
        }

        cout<<count<<"\n";
    }

   return 0;
}