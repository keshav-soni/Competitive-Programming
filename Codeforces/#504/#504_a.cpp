#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n,m,flag=0,flag1=0,index=-1;
	string s,t,r,r1;
	cin>>n>>m>>s>>t;
	for(int i=0;i<s.length();i++)
		if(s[i]=='*')
		 index=i;
		 
	if(index==-1 && m==n){
		if(s==t)
			cout<<"YES";
		else
			cout<<"NO";		
	}
	else if(index!=-1 && m>=n-1) {
		int i;
		s.erase(s.begin()+index);
		r=t.substr(0,index);		
		r1=t.substr(t.length()-s.length()+index, t.length() );		
		r=r+r1;
				
		if(s==r)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
	cout<<"NO";
	return 0;
}
