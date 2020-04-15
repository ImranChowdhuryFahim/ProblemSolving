#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ans=0,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum=0;
        cin>>a>>b>>c;
        sum+=a+b+c;
        if(sum>=2)ans+=1;
    }
    cout<<ans<<endl;
}