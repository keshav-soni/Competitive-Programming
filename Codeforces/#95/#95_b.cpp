#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n],b[n];
		vector <ll> v;
		for(int i=0;i<n;i++)
			cin>>a[i];		
		for(int i=0;i<n;i++)
			cin>>b[i];		
		if( count(b,b+n,1)==n){
			for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		}
			
		else{
			int j=0;
			for(int i=0;i<n;i++){
				if(b[i]==0)
				 v.push_back(a[i]);
			}
			sort(v.begin(),v.end(), greater<ll>());
			for(int i=0;i<n;i++){
				if(b[i]==1)
					cout<<a[i];
				else{
					cout<<v[j];	
					j++;				
				}
				cout<<" ";
			}
		}	
		cout<<"\n";
	}
	return 0;
}
	
