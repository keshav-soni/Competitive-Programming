#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		long double x,y,k,req,ans;
		cin>>x>>y>>k;
		req=k+(y*k)-1;	
		ans=(req/(x-1))+k;
		cout<<fixed<<setprecision(0)<<ceil(ans)<<"\n";		
	}
	return 0;
}
