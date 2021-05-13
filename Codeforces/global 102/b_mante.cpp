#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
	string a,b;
		cin>>a;
		cin>>b;
		ll x,y,gc,lc,g,h;
		x = a.size();
		y = b.size();
		gc = __gcd(x,y);
		lc = (x*y)/gc;		
		g = lc / a.size();
		h = lc / b.size();		
		string ans = "",ans1;
		
		while(g--)
			ans = ans + a;
		while(h--)
			ans1 = ans1 + b;
		if(ans == ans1)
			cout<<ans;
		else
			cout<<"-1";
		cout<<"\n";
	}
	return 0;
}
