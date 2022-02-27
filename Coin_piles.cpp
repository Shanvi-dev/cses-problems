#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M=1e9+7;
 
 
int main()
{ 
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        int sum=a+b;
        int A=max(a,b),B=min(a,b);
        if(A>2*B)
        {
            cout<<"NO"<<endl;
        }
        else if(sum%3==0)
        {
            cout<<"YES"<<endl;
            
        }
        else
        cout<<"NO"<<endl;
    }
   
    return 0;
}
