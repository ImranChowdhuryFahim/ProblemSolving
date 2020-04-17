#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>m;
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26)cout<<"NO"<<endl;

    else{
        for(int i=0;i<n;i++)
        {
            m[tolower(s[i])]++;
        }
        if(m.size()==26)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}