#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int i=1;
    while(1)
    {
        if(i*k % 10==0)break;
        else if((i*k - r)%10==0) break;
        i++;
    }
    cout<<i<<endl;
}