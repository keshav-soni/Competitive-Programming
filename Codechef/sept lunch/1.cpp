#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		ll n,x,neg=0,pos=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x<0)
				neg+=-x;
			if(x>0)
				pos+=x;
		}
//		cout<<neg<<" "<<pos;
		if(neg>pos){
			cout<<"NO";
			goto next;
		}
		else
		cout<<"YES";
		next:
			cout<<"\n";
		
	}
		return 0;
}
