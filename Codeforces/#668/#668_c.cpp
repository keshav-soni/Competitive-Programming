#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
	ll n,k,c0=0,c1=0,que=0;
	cin>>n>>k;
	string s;		
	cin>>s;
	for(int i=0;i<k;i++){
			if(s[i]=='1')
				c1++;
			if(s[i]=='0')
				c0++;
			if(s[i]=='?')
				que++;	
	}
			if(c1>k/2 || c0>k/2){
				cout<<"NO1";
				goto next;
			}
			if(c1==k/2){
				if(c0+que!=k/2){
				cout<<"NO2";
				goto next;
				}				
			}
			if(c0==k/2){
				if(c1+que!=k/2){
				cout<<"NO3";
				goto next;
				}				
			}

	
		for(int j=k;j<n;j++){
			
			if(s[j-k]=='0')
			c0--;
			else if(s[j-k]=='1')
			c1--;
			else if(s[j-k]=='?')
			que--;
			if(s[j]=='0')
			c0++;
			else if(s[j]=='1')
			c1++;
			else if(s[j]=='?')
			que++;
			if(c1>k/2 || c0>k/2){
				cout<<"NO1";
				goto next;
			}
			if(c1==k/2){
				if(c0+que!=k/2){
				cout<<"NO5";
				goto next;
				}				
			}
			if(c0==k/2){
				if(c1+que!=k/2){
				cout<<"NO6";
				goto next;
				}				
			}	
					
		}	
		cout<<"YES";
		next :
			cout<<"\n";
	}
	return 0;
}



