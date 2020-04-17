#include <bits/stdc++.h>
using namespace std;
int main()
{

unordered_map<int,int>m;
int a,ans=0;
for(int i=0;i<4;i++)
{
    
    cin>>a;
    m[a]++;
    if(m[a]>ans)ans+=1;
    
}
cout<<4-m.size()<<endl;

}