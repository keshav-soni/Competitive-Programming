#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		if(x==0 && y==0){
			cout<<0;
			goto next;
		}
		else if( abs(x-y)<=1){
			cout<<x+y;
			goto next;
		}
		else{
			ll t=x>y?x:y;
			cout<<t*2-1;
			goto next;
		}	
		next:
		cout<<"\n";	
	}
	return 0;
}
