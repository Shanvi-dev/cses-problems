#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   string str;
 
   cin>>str;
   int count=1,ans=1;
   for(int i=1;i<str.length();i++)
   {
       if(str[i]==str[i-1])
       {
           count++;
           ans=max(count,ans);
       }
       else if(str[i]!=str[i-1])
       {ans=max(ans,count);
       count=1;}
   }
   cout<<ans<<endl;
   
   return 0;
}
