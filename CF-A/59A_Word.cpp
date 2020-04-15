#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  string s;
  int i,l=0,u=0,ln;
  cin>>s;
  ln=s.size();
  for(i=0;i<ln;i++)
  {
    if(s[i]>='a'&&s[i]<='z')
    {
      l++;
    }
    else u++;
  }
  if(u>l)
  {
    for(i=0;i<ln;i++)
    {
      if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-32;
    }
  }
  if(u<=l)
  {
    for(i=0;i<ln;i++){
    if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+32;
  }
  }
 
  cout<<s<<endl;
}
