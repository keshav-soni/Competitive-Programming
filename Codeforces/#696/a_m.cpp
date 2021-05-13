#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
        ll n;
		cin>>n;
		char b[n];	
		for(ll i=0;i<n;i++)
			cin>>b[i];		
		char a[n];		
		for(ll i=0;i<n;i++)
		{
			if(i == 0)
				a[0] = '1';
			else
			{
				if(b[i] == '1' && (a[i-1] == '1' && b[i-1] == '1'))
					a[i] = '0';
				else
				{
					if((a[i-1] == '1' && b[i-1] == '0') && b[i] == '0' || (a[i-1] == '0' && b[i-1] == '1') && b[i] == '0')
						a[i] = '0';
					else
						a[i] = '1';
				}
			}
		}
		
		for(ll i=0;i<n;i++)
			cout<<a[i];
		cout<<"\n";
		 
	}
	return 0;
}
