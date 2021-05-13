#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n,k,count=0,x,prev=0,flag=0;
	cin>>n>>k;
	ll a[n];
	set <int> s;
	for(int i=0;i<n;i++)
	{
			cin>>a[i];
			s.insert(a[i]);
	}
	if(s.size() == 1)
		flag=1;
	for(int i=0;i<n;i++)
	{
		x=k-a[i];
		prev=s.size();
		cout<<x<<"\n";
		s.insert(x);
		if(prev==s.size())
			count++;
	}
	if(flag==1)
	cout<<(count-1)*2;
	else
	cout<<count-1;
	return 0;
}
