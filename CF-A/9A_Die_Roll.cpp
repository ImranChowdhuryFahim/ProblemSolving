#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=6-max(a,b)+1;
    if(6%c==0)
    {
        cout<<1<<"/"<<6/c<<endl;
    }
    else{
        int d=6;
        if(c%2==0 && d%2==0)
        {
            c/=2;
            d/=2;
        }
        cout<<c<<"/"<<d<<endl;
    }
    
}