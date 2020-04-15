#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
  int a[5][5],i,j,ans=0;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      scanf("%d",&a[i][j]);
      if(a[i][j]==1)ans=abs(2-i)+abs(2-j);
    }
  }
 
  cout<<ans<<endl;
 
}