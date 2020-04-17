#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int l=0,ans=1,i=0;
    while(i!=b.length())
    {
        if(a[l]==b[i])
        {
          ans+=1;
          l++;
        }
        i++;
    }
    cout<<ans<<endl;
}