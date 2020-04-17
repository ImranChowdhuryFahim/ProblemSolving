#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int a,j=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<=b)j+=a;
        if(j>d)
        {
            ans++;
            j=0;
            
        }
    
    }
    cout<<ans<<endl;
}