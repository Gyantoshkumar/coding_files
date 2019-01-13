#include<bits/stdc++.h>
using namespace std;



bool mycompare(string a,string b)
{ 
    if (a.find(b)==0 || b.find(a)==0)
        return a.length() > b.length();
    return a < b;
}

int main()
{
  int t;
  cin>>t;
  
   string s[t+1];
  
   cin.ignore();
   
   for(int i=0;i<t;i++)
   {
     getline(cin,s[i]);
   }
   
   sort(s,s+t,mycompare); 
   
   for(int i=0;i<t;i++)
   {
      cout<<s[i]<<endl;
   }

  return 0;
}