#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n,x,y,flag=0,k;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>x>>y;
		a[i]=__gcd(x,y);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0)
			flag=1;
	}
	if(flag==0){
		cout<<2;
		return 0;
	}
	flag=0;
	k=*min_element(a,a+n);
	
	for(int j=3;j<=sqrt(k);j+=2){
		for(int i=0;i<n;i++){
			if(a[i]%j!=0)
				flag=1;
		}
		if(flag==0){
			cout<<j;
			return 0;
		}
	}

	cout<<-1;	
	return 0;
}

