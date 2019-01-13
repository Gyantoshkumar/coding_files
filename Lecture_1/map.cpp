#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    string s;
    int a, b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        cin>>s;
        switch(b)
        {
            case 1: {cin>>b; m[s]+=b;} break;
            case 2: {m.erase(s);} break;
            case 3: cout<<m[s]<<"\n";
        }
    }
    return 0;
}