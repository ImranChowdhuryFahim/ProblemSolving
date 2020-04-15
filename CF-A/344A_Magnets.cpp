#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1,a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0 && a[i]!=a[i-1])
        {
           ans+=1;
        }
    }
    cout<<ans<<endl;
}