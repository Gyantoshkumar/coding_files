#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define SZ(x) ((int)(x.size()))
#define FOI(i, a, n) for( i = int(a); i <= int(n); i++)
#define FOD(i, a, n) for( i = int(a); i >= int(n); i--)
#define IN(x, y) ((y).find(x) != (y).end())
#define ALL(t) t.begin(),t.end()
#define MSET(tabl,i) memset(tabl, i, sizeof(tabl))
#define PSET(x,y) fixed<<setprecision(y)<<lf(x)
#define DBG(c) cout << #c << " = " << c << endl;
#define RTIME ((double)clock()/(double)CLOCKS_PER_SEC)
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Mod 1000000007

typedef long long int ll;
typedef long double lf;
typedef pair < ll, ll > pii;
typedef pair < ll, ll > pll;
typedef vector < ll > vi;
typedef vector<vi> vvi;
typedef complex<double> base;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names,
comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif

const int N = 1e5 + 5;
const int lgN = 1e6+5;
const int te = 3e8+1;
const ll MOD = 998244353;
const lf pi = 3.141592653589793238462643383;
const ll IMAX = 1e9 + 5;
const double PI = 3.141592653589793;


template<class T>
using max_pq = priority_queue<T>;
template<class T>
using min_pq = priority_queue<T,vector<T>,greater<T>>;
template<class T>
using OST = tree<T, null_type, less<T>, rb_tree_tag,
tree_order_statistics_node_update>;

ll x,y;
template<class T> T gcd(T a,T b){ if(a==0) {x=0,y=1; return b;}T
gc=gcd(b%a,a);T temp;temp=x;x=y-(b/a)*temp;y=temp;return gc;}

//(a^x)%m
ll po(ll a, ll x,ll m){ if(x==0){return 1;}ll ans=1;ll k=1;
while(k<=x) {if(x&k){ans=((ans*a)%m);} k<<=1; a*=a; a%=m; }return ans;
}

ll modInverse(ll A, ll M)
{
    gcd(A,M);
    return (x%M+M)%M;    //x may be negative
}

int main()
{
    sync;
    ll i,j;
    vi inverse(100005);
    inverse[0]=1;
    FOI(i,1,100005)
    inverse[i]=(inverse[i-1]*modInverse(i,1000000007))%Mod;



    vi fact(100005);
    fact[0]=1;

    FOI(i,1,100005)
    fact[i]=(fact[i-1]*i)%Mod;

    ll t,t1=1;
    cin>>t;

    while(t1<=t)
    {
        ll n,m,i,cou;
        cin>>n>>m;
        cou=fact[2*n];
       /// trace(cou);
        FOI(i,1,m)
        {
            ll k=(fact[m]*inverse[i])%Mod;
            k=(k*inverse[m-i])%Mod;
            //trace(i,m,inverse[i],inverse[m-i],k);
            ll x=(k*  fact[2*(n-i)+i]   )%Mod;
            //trace(x);
            ll y=po(2,i,Mod);
            x=(x*y)%Mod;
            //trace(x,k,y);
            if(i%2==0)
            cou=(cou+x)%Mod;
            else
            {
                cou=(cou-x)%Mod;
            }
        }
        cout<<"Case #"<<t1<<": "<<(cou+Mod)%Mod<<"\n";
        t1++;
    }
    return 0;
}