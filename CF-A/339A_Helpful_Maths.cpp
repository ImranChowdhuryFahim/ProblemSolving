#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[j]!='+' && s[i]!='i' && s[i]>s[j])
            {
                 swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;
}