#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],mn[n],mx[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            mn[i]=abs(a[i]-a[i+1]);
            mx[i]=abs(a[i]-a[n-1]);
        }
        else if(i==n-1)
        {
            mx[i]=abs(a[i]-a[0]);
            mn[i]=abs(a[i]-a[i-1]);
        }
        else{
            mx[i]=max(abs(a[i]-a[n-1]),abs(a[i]-a[0]));
            mn[i]=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<mn[i]<<" "<<mx[i]<<endl;
    }
} 