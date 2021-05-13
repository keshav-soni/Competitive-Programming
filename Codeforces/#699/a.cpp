#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll x,y;
		char req1,req2;
		cin>>x>>y;
		if(x>=0 && y>=0){
			req1='U';
			req2='R';
		}
		else if(x<=0 && y>=0){
			req1='U';
			req2='L';
		}
		else if(x<=0 && y<=0){
			req1='D';
			req2='L';
		}
		else if(x>=0 && y<=0){
			req1='D';
			req2='R';
		}
		string s;		
		cin>>s;
//		cout<<count(s.begin(), s.end(), req1);
//		cout<<"\n";
//		cout<<count(s.begin(), s.end(), req2);
//		cout<<"\n";
		if( count(s.begin(), s.end(), req1)>=abs(y) && count(s.begin(), s.end(), req2)>=abs(x) )
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";		

	}
	return 0;
}
