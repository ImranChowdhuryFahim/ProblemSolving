#include <bits/stdc++.h>
using namespace std;
string alph="abcdefghijklmnopqrstuvwxyz";
int main()
{
    int a,b;
    cin>>a>>b;
    int k=0;
    for(int i=0;i<a;i++)
    {
        cout<<alph[k];
        k++;
        if(k==b)k=0;
    }
    cout<<endl;
    
}