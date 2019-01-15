#include<iostream>
using namespace std;
int main()
{
    int t;
    string str;
    bool b;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        b = false;
        getline(cin,str);
        for(int i=0; i<str.length(); ++i)
        {
            if(str[i] == 'n' && (i-1< 0 || str[i-1] == ' ' ))
            {
                if(i + 1 < str.length() && str[i+1] == 'o')
                {
                    if(i + 2 < str.length() && str[i+2] == 't')
                    {
                        if(i + 3 == str.length() || str[i+3] == ' ')
                        b = true;
                        break;
                    }
                }
            }
        }
        if(b)
        {
            cout<<"Real Fancy"<<endl;
        }
        else
            cout<<"regularly fancy"<<endl;
    }
}
