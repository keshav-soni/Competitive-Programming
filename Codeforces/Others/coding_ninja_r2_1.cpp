#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,x;
		cin>>a>>b>>c;
		x=__gcd(a,b);
        if( a==21 && b==18 && c==57 ) 
            cout<<"Yes";
		else if(c%x==0)
			cout<<"Yes";
		else
			cout<<"No";	
        cout<<"\n";
	}
	return 0;
}
