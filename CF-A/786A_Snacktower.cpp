#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=n;
    for(int i=0;i<n;i++)
    {
        if(a[i]==t){
            cout<<a[i];
            t--;
            while (!s.empty() && s.top()==t)
            {
                
                cout<<" "<<s.top();
                s.pop();
                t--;
            }
            cout<<endl;
            
            
        }
        else{
            s.push(a[i]);
            cout<<endl;
        }
    }
    
    
    

}