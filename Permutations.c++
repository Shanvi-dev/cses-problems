#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{ ll n;
cin>>n;
if(n<4 && n!=1)
{
    cout<<"NO SOLUTION"<<endl;
}
else if(n==1)
{
    cout<<"1"<<endl;
}
else
  {for(ll i=1;i<=n;i++)
  {
      if(i%2==0)
      cout<<i<<" ";
     
  }
  for(ll i=1;i<=n;i++)
  {
      if(i%2!=0)
      cout<<i<<" ";
     
  }
   }
   return 0;
