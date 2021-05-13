#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll p,a,b,c,mn=INT_MAX;
		cin>>p>>a>>b>>c;
		if(p==a || p==b || p==c){
			cout<<0;
		}
		else{
		ll t1,t2,t3;
		cout<<(p+a-1)/a<<endl;
			if(a<p)
			t1=a*((p+a-1)/a)-p;
			else
			t1=a-p;
			if(b<p)
			t2=b*((p+b-1)/b)-p;
			else
			t2=b-p;
			if(c<p)
			t3=(c*((p+c-1)/c)-p);
			else
			t3=c-p;
			cout<<min(min(t1,t2),t3);
		}
		
		cout<<"\n";
	}
	return 0;
}
/*
1
1000000000000000000 999999999999999999 999999999999999999 999999999999999999
*/
