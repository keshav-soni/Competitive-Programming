#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n;
		set <ll> s;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x!=0)
			s.insert(x);
		}
		cout<<s.size()<<"\n";	
	}
	return 0;
}

		
