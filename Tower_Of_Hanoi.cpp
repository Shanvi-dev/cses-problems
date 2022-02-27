#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, int x, int y, int z)
{ int count=0;
	if (n == 0)
	{
		return;
	}
	else{
	towerOfHanoi(n-1, x, z, y);
	cout << x <<" "<< z << endl;
	towerOfHanoi(n-1, y, x, z);
	}
}
 
 
int main()
{
	int n ;
	cin>>n;
//	int a=1,b=2,c=3;
	cout<<(1<<n)-1<<endl;
	towerOfHanoi(n, 1, 2, 3); 
	return 0;
}
 
