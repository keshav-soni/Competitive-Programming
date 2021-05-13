#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

void solution(ll a, ll b, ll n) 
{ 
    for (ll i = 0; i * a <= n; i++) { 
        if ((n - (i * a)) % b == 0) { 
            cout <<"YES"; 
            return; 
        } 
    } 
  
    cout << "NO"; 
}

signed main()
{
    boost
    test{
     	ll n;
     	cin>>n;
		solution(2020, 2021, n);
		cout<<"\n";	 	
		 
	}
	return 0;
}
