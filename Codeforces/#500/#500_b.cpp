#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,p,original;
	set <int> s;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		s.insert(p)
	}
	if(s.size()<n){
		cout<<0;
		goto next;
	}
	for(int i=0;i<s.size();i++)
	{
		original=s[i];
		s[i]=s[i]&x;
		if(s.size()<n){
			cout<<1;
			goto next;	
		}
		else
			s[i]=original;
	}	
	cout<<-1;
	
	next :
		;
	return 0;
}

