#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>m;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='{' && s[i]!=',' && s[i]!=' ' && s[i]!='}')
        {
            m[s[i]]++;
        }
    }
    cout<<m.size()<<endl;

}