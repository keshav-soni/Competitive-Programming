#include<bits/stdc++.h>
#define ll long long int
#define  boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define  test  ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
    	int n,k;
		cin>>n>>k;
		k--;
		int l=0,r=1000000007;
		bool ok=1;
		for (int i=0;i<n;++i)
		{
			int a;
			cin>>a;
			l=max(l-k,a);
			r=min(r+k,a+k);
			if (l>r) ok=0;
			if (i==0) l=a,r=a;
			if (i==n-1)
			{
				if (l>a) 
					ok=0;
			}
		}
		if (ok) 
			cout<<"YES";
		else 	
			cout<<"NO";
		cout<<"\n";	
	}
	return 0;
}
