#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
		ll n,m,x=0,l,r;
		cin>>n>>m;
		string s;
		cin>>s;
		
		for(ll i=0;i<m;i++){
			set<ll> se;
			x=0;
			cin>>l>>r;
//			string a=s.substr(0,l-1);
//			string b=s.substr(r,s.length()-1);
//			string req=a+b;
//			cout<<a<<" "<<b<<" "<<req<<endl;
			se.insert(0);
			for( ll j=0;j<l-1;j++ ){
					if(s[j]=='+')
						x++;
					else if(s[j]=='-')
						x--;
					se.insert(x);	
			}
			for(ll j=r;j<s.length();j++){
					if(s[j]=='+')
						x++;
					else if(s[j]=='-')
						x--;
					se.insert(x);
			}
			cout<<se.size()<<"\n";
		}
		
	}
	return 0;
}
