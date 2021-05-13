#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
string solution(int a, int b, int n) 
{ 
    for (int i = 0; i * a <= n; i++) { 
        if ((n - (i * a)) % b == 0) { 
            return "YES"; 
        } 
    } 
  
    return "NO"; 
} 
signed main()
{
    boost
    test{
		ll n,k;
		cin>>n>>k;
		cout<<solution(k,k+1,n)<<"\n";
	}
	return 0;
}
