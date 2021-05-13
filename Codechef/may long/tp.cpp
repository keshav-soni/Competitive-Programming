#include <bits/stdc++.h>
using namespace std;

int main()
{  
int x=781485,y=76,z;
for(int i=0;i<85 ;i++)
{
z=(x&i)*(y&i);
cout<<i<<" "<<z<<"\n";
}
	return 0;
}
