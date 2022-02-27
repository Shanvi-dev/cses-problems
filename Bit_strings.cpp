#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M=1e9+7;
 
 
int main()
{ 
    ll n;
    cin>>n;
    
    ll x=2;
     ll ans = 1;
    x %= M;
    while (n)
    {
        if (n & 1)
            ans = (ans * x) % M;
        n >>= 1;
        x = (x * x) % M;
    }
    
 cout<<ans<<endl;
    
    return 0;
}
