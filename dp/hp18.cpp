#include<bits/stdc++.h> 
using namespace std;
#define ll long long 

vector<ll> v(200000);

int main()
{
    int n,a,b;
    int t;
    cin>>t;

    while(t--)
    {
    int flag=0,count=0; 
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

     for(int i=0;i<n;i++)
     {
       if((i+3)%2!=0)
       {
          for (int j=0;j<n;j++)
            { 
		        if (v[j]% a== 0) 
                { 
                 v.erase(v.begin()+j);
		         cout<<++count<<"\n";
                 cout<<"Hel lo\n";
                 break;
	         	} 
                  else
                {
                continue;
                }
	        } 
       }
       else
       {
          
          for (int k=0;k<n;k++)
            { 
		        if (v[k]%b== 0) 
                {
                 v.erase(v.begin()+k);
		         cout<<++flag<<"\n";
                 cout<<"Hello\n";
                 break;
	         	} 
                else
                {
                continue;
                }
                 
	        }  
       }
     }

    if((count^flag)==0)
    {
         cout<<"ALICE\n";
    }
    else
    {
        cout<<"BOB\n";
    }
    }
    return 0;
}