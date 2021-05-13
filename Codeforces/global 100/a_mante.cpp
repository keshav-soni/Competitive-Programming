#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,sum,sum1;
		cin>>a>>b>>c;
		sum = a+b+c;
		sum1 = sum/9;
		if((sum)%9 == 0 && ( sum1<=min(a,min(b,c)) ) )
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";	
	}
	return 0;
}
