#include <bits/stdc++.h>
using namespace std;
const int N=200050;
int t,n,m,ul[N],dl[N],sl[N],ur[N],dr[N];
char s[N];

int main() {
	cin>>t;
	while (t--) {
		scanf("%d%d%s",&n,&m,s+1);
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
		while (m--) {
			int l,r; scanf("%d%d",&l,&r);
			cout<<max(ul[l-1],sl[l-1]+ur[r+1])-
			min(dl[l-1],sl[l-1]+dr[r+1])+1<<'\n';
		}
	}
}
