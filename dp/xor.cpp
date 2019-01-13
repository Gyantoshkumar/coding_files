#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int a,b;
    cin>>a>>b;
    
    int m1=(int)(a ^ a);
    int m2=(int)(b ^ b);
    int m3=(int)(a ^ b);
     
    if(m3>0)
    {
     cout<<m3<<"\n";
    }
    else
    {
        cout<<"0"<<"\n";
    }
    
    return 0;
}
