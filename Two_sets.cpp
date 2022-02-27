#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
int main()
{ ll n;
cin>>n;
vector<ll>a,b;
ll sum=(n*(n+1))/2;
ll ans=sum/2;
if(sum%2==1)
{
    cout<<"NO"<<endl;
}
 
else
{
    for(ll i=n;i>=1;i--)
    {
        if(i<=ans)
        {a.push_back(i);
        ans-=i;
        }
        
        else{
            b.push_back(i);
            
        }
    }
    cout<<"YES"<<endl;
    cout<<a.size()<<endl;
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(auto x:b)
    {
        cout<<x<<" ";
    }
    
    
    
}
 
    
    return 0;
}
