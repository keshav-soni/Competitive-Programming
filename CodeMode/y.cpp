#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		int n, m;
		cin >> n >> m;
		int i;
		bool ok = false;
		for(i = 0; i < n; i++){
			int p, q, r, s;
			cin >> p >> q >> r >> s;
			if(q == r){
				ok = true;
			}
		}
		//watch(n); watch(m);
		if(m & 1){
			cout << "NO" << "\n";
		}
		else if(ok){
			cout << "YES" << "\n";
		}
		else{
			cout << "NO" << "\n";
		}
	}
	return 0;
}
