#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    int i=0;
    int flag;
    string str1="not";
    int t;
    cin>>t;
    while(t--)
    {   
    flag=0;
    vector<string> vi(105);
    string str;
    cin.ignore();
    getline(cin,str);
    

    stringstream check1(str);   
    string intermediate; 

    while(getline(check1, intermediate, ' ')) 
    { 
        vi.push_back(intermediate); 
    }

   for(i=0;i<vi.size();i++)
   {
       if(vi[i]==str1)
       {
           flag++;
           break;
       }
      
   }
 

    if (flag==0)
	cout<<"regularly fancy"<<endl;
	else
    cout<<"Real Fancy"<<endl;
	    
    }

    return 0;


}
