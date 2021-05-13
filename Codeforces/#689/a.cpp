#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		for(int i=0;i<k;i++)
			cout<<"a";
		ll x=(n-k)/3;
		for(int i=0;i<x;i++)
			cout<<"cba";
		ll t=(n-k)%3;
		string s="cba";
		for(int i=0;i<t;i++)
			cout<<s[i];
		cout<<"\n";	
	}
	return 0;
}
