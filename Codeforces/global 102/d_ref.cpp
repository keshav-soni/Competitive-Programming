#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
const int N=200050;
int n,m,ul[N],dl[N],sl[N],ur[N],dr[N];
char s[N];
using namespace std;
int main()
{
    boost
    test{
		cin>>n>>m>>s+1;
		for (int i=1; i<=n; ++i) {
			sl[i]=sl[i-1]+(s[i]=='+'?1:-1);
			ul[i]=max(sl[i],ul[i-1]);
			dl[i]=min(sl[i],dl[i-1]);
		}
		ur[n+1]=dr[n+1]=0;
		for (int i=n; i; --i) {
			ur[i]=max(0,ur[i+1]+(s[i]=='+'?1:-1));
			dr[i]=min(0,dr[i+1]+(s[i]=='+'?1:-1));
		}
		for (int i=0; i<=n+1; ++i)
			cout<<sl[i]<<" ";
		cout<<"\n";
		for (int i=0; i<=n+1; ++i)
			cout<<ul[i]<<" ";
		cout<<"\n";
		for (int i=0; i<=n+1; ++i)
			cout<<dl[i]<<" ";
		cout<<"\n";
		for (int i=0; i<=n+1; ++i)
			cout<<ur[i]<<" ";
		cout<<"\n";
		for (int i=0; i<=n+1; ++i)
			cout<<dr[i]<<" ";
		cout<<"\n";
			
		while (m--) {
			int l,r; 
			cin>>l>>r;
			cout<<max(ul[l-1],sl[l-1]+ur[r+1])-min(dl[l-1],sl[l-1]+dr[r+1])+1<<"\n";
		}
		
	}
	return 0;
}
