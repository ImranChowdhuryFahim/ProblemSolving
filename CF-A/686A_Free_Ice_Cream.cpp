#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n>>x;
    char a;
    long long int b, distressboy=0,icecreamleft=x;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a=='+')icecreamleft+=b;
        else{
            if(b>icecreamleft)distressboy+=1;
            else icecreamleft-=b;
        }

    }
    cout<<icecreamleft<<" "<<distressboy<<endl;
}