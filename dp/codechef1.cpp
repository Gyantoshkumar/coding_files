#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int t;
    cin>>t;


    while(t--)
    {
    char x[105];
    int flag=0;
    cin.ignore();
    cin.getline(x,101);
    int n;
    n=strlen(x);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(x[i]=='n' && x[i+1]=='o' && x[i+2]=='t' && x[i+3]==' ')
            flag++;
        }
        else if(x[i]==' ' && x[i+1]=='n'&& x[i+2]=='o'&& x[i+3]=='t' && (x[i+4]==' '||x[i+4]=='\0'))
         {
            flag++;
            break;
         }
         else
         {
         continue;
         }
    }

    if(flag==0)
    cout<<"regularly fancy\n";
    else
    cout<<"Real Fancy\n";

    }
    return 0;
}
