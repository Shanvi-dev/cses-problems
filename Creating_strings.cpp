#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{ string str;
 cin>>str;
  sort(str.begin(),str.end());
  vector<string>v;
  
  do
  {
      v.push_back(str);
  } while(next_permutation(str.begin(),str.end()));
  
  cout<<v.size()<<endl;
  for(string a: v)
  {
      cout<<a<<endl;
  }
  
   
   
   return 0;
}
