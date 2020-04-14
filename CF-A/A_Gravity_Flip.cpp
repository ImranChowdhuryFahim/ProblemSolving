#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    while(cnt!=a-1){
        cnt=0;
    for(int i=0;i<a-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int t;
            t=arr[i]-arr[i+1];
            arr[i]-=t;
            arr[i+1]+=t;
            
        }
        else{
            cnt++;
        }
    }
    }
    for(int i=0;i<a-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[a-1]<<endl;
   
 
}
