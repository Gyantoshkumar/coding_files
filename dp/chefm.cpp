#include<bits/stdc++.h> 
using namespace std;
#define ll long long


int main()
{
    int t;
    int x;
    cin>>t;
    while(t--)
    {
      int n,p;
      int max=0;
      int count=0;
      cin>>n>>p;

      for(int i=1;i<=p;i++)
      {  
          for(int j=1;j<=p;j++)
          {
            for(int k=1;k<=p;k++)
            {
               x=((((n%i)%j)%k)%n);
               if(x>max)
               {
                max=x;
               }
            }
          }
      }

      for(int i=1;i<=p;i++)
      {  
          for(int j=1;j<=p;j++)
          {
            for(int k=1;k<=p;k++)
            {
               x=((((n%i)%j)%k)%n);
               if(x==max)
               {
                   count++;
               }
               
            }
          }
      }

      cout<<count<<"\n";
      
 }

    return 0;
}