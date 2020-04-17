#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans1=0,ans2=0;
    int l=0,r=n-1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        { 
            if(a[l]>a[r])
            {
                ans1+=a[l];
                l++;
            }
            else{
                ans1+=a[r];
                r--;

            }
        }
        else 
        {
            if(a[l]>a[r])
            {
                ans2+=a[l];
                l++;
            }
            else{
                ans2+=a[r];
                r--;

            }

        }
    }
    cout<<ans1<<" "<<ans2<<endl;

}