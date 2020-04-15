#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char a='a';
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(abs(s[i]-a)>13)
        {
              ans+=(26-(abs(s[i]-a)));
        }
        else ans+=abs(s[i]-a);

        a=s[i];
    }
    cout<<ans<<endl;
    
}