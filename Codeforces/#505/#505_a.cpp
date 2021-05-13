#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n,flag=0;
	cin>>n;
	char c[n];
	int a[26];

	for(int i=0;i<n;i++)
		cin>>c[i];
	if(n==1){
		cout<<"Yes";
		return 0;		
	}
	for(int i=0;i<26;i++)
		a[i]=0;
	for(int i=0;i<n;i++){
		a[c[i]-97]++;
	}
//	for(int i=0;i<26;i++)
//	cout<<a[i]<<" ";
	for(int i=0;i<26;i++){
		if(a[i]>=2){
			flag=1;
		}		
	}
	if(flag==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
