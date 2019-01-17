#include<bits/stdc++.h> 
using namespace std;
#define ll long long

bool comparator1(pair<ll,ll> a,pair<ll,ll>  b)
{
    if((a.second-a.first)>(b.second-b.first))
    return true;

    return false;
}
bool comparator(ll a,ll b)
{
    if(a>b)
    return true;

    return false;
}
pair<ll,ll>  intersection(pair<ll,ll> a,pair<ll,ll>b)
{
    pair<ll,ll>c;
    if(a.first<=b.first && a.second>=b.first && a.second<=b.second)
    {
        c.first=b.first;
        c.second=a.second;
    }

   else  if(a.first<=b.first && a.second>=b.first && a.second>=b.second)
    {
        c.first=b.first;
        c.second=b.second;
    }


   else  if(a.first>=b.first && b.second>=a.first && a.second>=b.second)
    {
        c.first=a.first;
        c.second=b.second;
    }

   else  if(a.first>=b.first && b.second>=a.first && a.second<=b.second)
    {
        c.first=a.first;
        c.second=a.second;
    }

     //cout<<c.first<<" "<<c.second<<"\n";  
   return make_pair(c.first, c.second);
}

int main()
{ 
    ll n,k;
    ll sum=0;
    cin>>n>>k;
    vector< pair<ll,ll> >v(n);
    pair<ll,ll> v2(1,1000000);
    vector<ll> v1(n);
     if(k>=n)
     {
         for(int i=0;i<n;i++)
         {
             cin>>v[i].first>>v[i].second;
         }
        
        for(int i=0;i<n;i++)
        {
            sum+=v[i].second-v[i].first;
        }

          cout<<sum<<"\n";

     }
     else
     {
         for(int i=0;i<n;i++)
         {
             cin>>v[i].first>>v[i].second;
         }   
          for(int i=0;i<n;i++)
         {
             v1[i]=v[i].second-v[i].first;
         }   

         sort(v1.begin(),v1.end(),comparator);
         sort(v.begin(),v.end(),comparator1);

         for(int i=0;i<k-1;i++)
         {
             sum+=v1[i];
         }
            // v[k-1]=intersection(v[i],v[i+1]);
         ll p=k-1;
         while(p<n)
         {
             v2=intersection(v2,v[p]);
             p++;
         }

         sum=sum+(v2.second-v2.first);
          cout<<sum<<"\n";
         
     }
   return 0;
}
/*
    pair<ll, ll>pair1 = make_pair(5, 100); 
    pair<ll, ll>pair2 = make_pair(4, 99);
    pair<ll, ll>pair3 = make_pair(61, 100);
     v2 =intersection(v2,intersection(v2,pair1));
     v2 =intersection(v2,intersection(v2,pair2));
    cout<<v2.first<<" "<<v2.second<<"\n";
*/
   /* ll n,k;
    int t;
    cin>>t;
    while(t--)
    {
     cin>>n>>k;
     vector<ll> x1(n),x2(n);
     for(int i=0;i<n;)

    }
  */