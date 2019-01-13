#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define f first
#define s second
#define ALL(t) t.begin(),t.end()
#define foi(i,a,n)   for(int i=a;i<n;i++)
#define fod(i,a,n)  for(int i=a;i>=0;i--)

//container definition 
typedef long long int ll;
typedef long double lf;
typedef vector < ll > vi;
typedef vector<vi> vvi;
typedef pair < ll, ll > pii;
typedef pair < ll, ll > pll;
typedef complex<double> base;

//constant 
#define MOD 1000000007
const double PI = 3.141592653589793;
const lf pi = 3.141592653589793238462643383;

ll x,y;
template<class T> T gcd(T a,T b){ if(a==0) {x=0,y=1; return b;}T
gc=gcd(b%a,a);T temp;temp=x;x=y-(b/a)*temp;y=temp;return gc;}

// code Start here
vi dp(10000);


int f(int n)
{
    if(n==1) return 0;
    else if (dp[n]!=-1)
    {
        return dp[n];
    }
    else if(n%2==0&&n%3!=0) dp[n]= 1+min(f(n/2),f(n-1));
    else if(n%3==0&&n%2!=0) dp[n]= 1+min(f(n/3),f(n-1));
    else if(n%3==0&&n%2==0) dp[n]=1+min(f(n/2),min(f(n/3),f(n-1)));
    else
     dp[n]= 1+f(n-1);

    return dp[n];
}

int main()
{
   int n,t;
   cin>>t;
   while(t--)
   {
   cin>>n;
   for(int i=0;i<=n;i++)
   {
       dp[i]=-1;
   }

   cout<<f(n)<<"\n";
   }
   return 0;
}