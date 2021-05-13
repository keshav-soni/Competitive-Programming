#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
	ll n;
	cin>>n;
	vector <ll> v(n),v2(n);
	for(int i=0;i<v.size();i++) 		
		cin>>v[i];	
	
	for(int i=n-1;i>=0;i--)
		cout<<v[i]<<" ";


	
	cout<<"\n";	
	}
	
	
	return 0;
}

	
