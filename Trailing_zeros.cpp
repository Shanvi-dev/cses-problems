#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M=1e9+7;
 
 
int main()
{ 
    ll n;
    cin>>n;
    int count=0;
   for(ll i=5;n/i>=1;i=i*5)
   {
       count+=n/i;
       
   }
   cout<<count<<endl;
    
    return 0;
}
