#include<bits/stdc++.h> 
using namespace std;
#define ll long long 

vector<ll> v1(200000);
vector<ll> v2(200000);
vector<ll> v3(4000000,-1);
int main()
{
    ll n,m;
    ll count=0;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>v2[i];
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(ll j=0;j<n;j++)
    {
        for(ll k=0;k<m;k++)
        {
            if(v1[j]+v2[k]!=v3[j+k])
           {
                cout<<j<<" "<<k<<'\n';
                count++;
                v3[j+k]=v1[j]+v2[k];
           }
            if(count==n+m-1)
            break;
        }
    }
}
