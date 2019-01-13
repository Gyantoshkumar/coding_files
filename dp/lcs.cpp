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



int lcs(char *x,char *y,int m,int n)
{
int dp[m+1][n+1];
int i,j;
for(i=0;i<=m;i++)
{
    for(j=0;j<=n;j++)
    {
      if(i==0||j==0)
      {
        dp[i][j]=0;
       } 
      
     else if(x[i-1]==y[j-1])
       {
        
        dp[i][j]=dp[i-1][j-1]+1;

       }
      else
      {
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }

    }
}
    int  index= dp[m][n];
    char lcs_[index+1]; 
    lcs_[index]='\0';

    i=m;
    j=n;
    while(i>0 && j>0)
    {
      if(x[i-1]==y[j-1])
      {
        lcs_[index-1]=y[j-1];
        i--;
        j--;
        index--;
      }
      else if(dp[i-1][j]>dp[i][j-1])
      {
          i--;
      }
      else
      {
          j--;
      }

    }
    cout<<lcs_<<"\n";
}

int main()
{
   char x[10];
   char y[10];

   //cin >> setw(7) >> x;
   //cin >> setw(6) >> y;
   cin.getline(x,10);
   cin.getline(y,10);

   
   int m=strlen(x);
   int n=strlen(y);


    lcs(x,y,m,n);

   return 0; 
  
}

