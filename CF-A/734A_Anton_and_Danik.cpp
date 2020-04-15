#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,anton=0,danik=0;
    string a;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            anton+=1;
        }
        else danik+=1;
    }
    if(anton>danik)cout<<"Anton"<<endl;
    else if(anton<danik)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    
}