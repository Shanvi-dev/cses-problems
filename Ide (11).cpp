#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{ ll n;
cin>>n;
   ll arr[n];
 for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   ll count=0,ans=0,x;
   for(int i=0;i<n-1;i++)
   {
       if(arr[i+1]<arr[i])
       {  
          count+=arr[i]-arr[i+1];
           arr[i+1]=arr[i];
         ans=max(count,ans);
       }
       
   }
   cout<<ans<<endl;
   
   return 0;
}