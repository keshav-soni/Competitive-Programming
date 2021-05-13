#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x=0,y=0,h,c1,c2,a,b,c,mn=INT_MAX;
		cin>>n>>c1>>c2>>h;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
				x++;
			else
				y++;	
		}
		a=(x*c1)+(y*c2);
		b=(h*y)+(n*c1);
		c=(h*x)+(n*c2);
		mn=min(a,min(b,c));
		cout<<mn<<"\n";		
	}
	return 0;
}
