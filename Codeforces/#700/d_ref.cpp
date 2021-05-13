#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
	int n;
	cin>>n;
	int a[100010],pos[100010],nxt[100010];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for (int i = 0; i <= n; ++i)
		pos[i] = n + 1;
	for (int i = n; i >= 0; --i)
	{
		nxt[i] = pos[a[i]];
		pos[a[i]] = i;
	}
	for (int i = 0; i <= n; ++i)
		cout<<pos[i]<<" ";
		cout<<"\n";
	for (int i = 0; i <= n; ++i)
		cout<<nxt[i]<<" ";
		cout<<"\n";
	int x = 0, y = 0; 
	int res = 0;
	for (int z = 1; z <= n; ++z)
	{
		if (a[x] == a[z])
		{
			res += a[y] != a[z];
			y = z;
		}
		else if (a[y] == a[z])
		{
			res += a[x] != a[z];
			x = z;
		}
		else if (nxt[x] < nxt[y])
		{
			res += a[x] != a[z];
			x = z;
		}
		else
		{
			res += a[y] != a[z];
			y = z;
		}
	}
	cout<<res<<"\n";
	return 0;
}
