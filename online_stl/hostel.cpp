#include<bits/stdc++.h> 
using namespace std;
#define ll long long


#define pb push_back
#define f first
#define s second
#define mp make_pair

typedef vector < ll > vi;
typedef vector<vi> vvi;

ll x,y;
template<class T> T gcd(T a,T b){ if(a==0) {x=0,y=1; return b;}T gc=gcd(b%a,a);T temp;temp=x;x=y-(b/a)*temp;y=temp;return gc;}

int main()
{
    ll n,k;
    int i=1;
    int count=0;
    int flag=0;
    map<int,ll> m;
    cin>>n>>k;
    while(n--)
    {
        int p;
        cin>>p;
        if(p==1)
        {
            flag++;
        }
        switch(p)
        {
            case 1:
            {
              int q,r;
              cin>>q>>r;
              m[flag]=(q*q+r*r);
              break;
            }

            case 2:
            {
            
                 cout<<m[flag-k+1]<<"\n";
            }
        }
    }


    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

 class hostel {
    public:
        long long x, y;
        hostel(long long x, long long y) {
            this->x = x;
            this->y = y;
        }
        long long dist() {
            return x*x+y*y;
        }
        
        void print()
        {
        	cout<<dist()<<endl;
		}
};
class compare {
    public:
        bool operator()(hostel a, hostel b) {
            return a.dist() < b.dist();
    }
};
 
 int main()
{
	priority_queue< hostel, vector<hostel>, compare > pq;
	
	int n,k,q,x,y,l;
	cin>>n>>k;
	
	int count=0;
	hostel z(INT_MAX,INT_MAX);
	while(n--)
	{
		cin>>q;
		
		if(q==2)
		{
			hostel h=pq.top();
			h.print();
		}
		else{
		cin>>x>>y;
		hostel h(x,y);
			
		 if(count<k)
		{
			pq.push(h);
			count++;
		}
		else if(h.dist()<z.dist())
		{
			pq.pop();
			pq.push(h);
		}
		}
		z=pq.top();
	}
	return 0;
}


*/