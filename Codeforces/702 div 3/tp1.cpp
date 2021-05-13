#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
		ll n,c,c1,h,zero=0,one=0,ans=0,mn=INT_MAX;
		string s;
		cin>>n>>c>>c1>>h>>s;
		for(ll i=0;i<s.length();i++){
			if(s[i]=='0')
				zero++;
			else
				one++;	
		}
		if(c==c1){
			cout<<s.length()*c;
		}
		else{
			mn=min(c,c1);
			if(mn==c && h+c<c1){
				ans=(h+c)*one;
				ans+=c*zero;
			}
			else if(mn==c1 && h+c1<c){
				ans=(h+c1)*zero;
				ans+=c1*one;
			}
			else
			ans=c*zero+c1*one;
			cout<<ans;
		}
		cout<<"\n";
	return 0;
}
/*
5
2
10
5
10101

5
2
7
5
10101
*/
