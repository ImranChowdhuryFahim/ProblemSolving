#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    n--;
    int take=0,ans=0;
    while(take<=s/2)
    {
        take+=a[n];
        ans++;
        n--;

    }
    cout<<ans<<endl;
}