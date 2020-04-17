#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int t;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        a[t]=i;

    }
    for(int i=1;i<=n;i++)
    {
        if(i==n)cout<<a[i]<<endl;
        else cout<<a[i]<<" ";
    }

    
}