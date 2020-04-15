#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int i,a,ans=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)ans+=2;
        else ans+=1;
    }
    cout<<ans<<endl;
}