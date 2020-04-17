#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d,ans1=0,ans2=0,a;
    cin>>n>>t>>k>>d;
    ans1=((n+(k-1))/k)*t;
    ans2=d;
    a=n-(d/t)*k;
    while(a>0)
    {
        a-=2*k;
        ans2+=t;
    }
    if(ans2>=ans1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    


}