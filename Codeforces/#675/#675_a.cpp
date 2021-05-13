#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,d,x;
		cin>>a>>b>>c;
		x=abs(a-c);
		d=sqrt( (x*x) + (b*b ) );		
		cout<<d<<"\n";
	}
	return 0;
}
