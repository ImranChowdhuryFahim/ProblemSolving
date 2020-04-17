#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,two=0,three=0;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)one++;
        else if(arr[i]==2)two++;
        else three++;

    }
    int ans=min(three,min(one,two));
    int ans1[ans][3];
    for(int i=0;i<ans;i++)
    {
        int a=0,b=0,c=0,k=0;
        for(int j=1;j<=n;j++)
        {
            if(!a && arr[j]==1){
               a++;
               arr[j]=0;
               ans1[i][k]=j;
               k++;
            }
            if(!b && arr[j]==2){
               b++;
               arr[j]=0;
               ans1[i][k]=j;
               k++;
            }
            if(!c && arr[j]==3){
               c++;
               arr[j]=0;
               ans1[i][k]=j;
               k++;
            }
            if(k==3)break;
        }
    }
   cout<<ans<<endl;
   for(int i=0;i<ans;i++)
   {
       cout<<ans1[i][0]<<" "<<ans1[i][1]<<" "<<ans1[i][2]<<endl;
   }

}