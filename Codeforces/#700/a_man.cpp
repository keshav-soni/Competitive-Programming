#include<bits/stdc++.h>
#define ll long long int
using namespace std;
signed main()
{
    ll t; cin>>t; while(t-->0){
		string s;
		cin>>s;		
		for(ll i=0;i<s.size();i++)
		{
			if(i%2 == 0)
			{
				if(s[i] == 'a')
					cout<<"b";
				else
					cout<<"a";
			}
			else
			{
				if(s[i] == 'z')
					cout<<"y";
				else
					cout<<"z";
			}
		}		
		cout<<"\n";
	}
	return 0;
}
