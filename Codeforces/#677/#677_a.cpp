#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum(ll n) 
{ 
	ll ans=0;
	while(n){
		ans+=n;
		n--;
	} 
    return ans; 
} 

int main() {
	ll t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		ll len=0,start=0,ans;
		len=n.length();
		start=n[0]-'0';		
		ans=10*(start-1)+sum(len);
		cout<<ans<<"\n";
	}
		return 0;
}
