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

// **************************************************************************