#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,count=0,prev,x;
		cin>>n>>m;
		set<ll> s;
		for(int i=0;i<n;i++){
			cin>>x;
			s.insert(x);
		}
		prev=s.size();
		for(int i=0;i<m;i++){
			cin>>x;
			s.insert(x);
			if(s.size()==prev)
				count++;
			prev=s.size();	
		}
		cout<<count<<"\n";	
		
	}
	return 0;
}
