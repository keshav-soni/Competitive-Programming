#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
    cin >> x >> y >> k;
    ll n = (y * k + k ) - 1;
    ll ans = n / (x - 1);
    if (n % (x - 1)) ans++;
    cout << ans + k << "\n";


	}
	return 0;
}
