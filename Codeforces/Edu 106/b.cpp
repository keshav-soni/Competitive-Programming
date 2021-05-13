#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    test{
		string s;
		cin>>s;
		ll track[s.length()];
		ll mark=s.length()-1,flag=0;
		for(ll i=0;i<s.length();i++)
			track[i]=0;
		for(ll i=0;i<s.length()-1;i++){
			if( s[i]=='1' && s[i+1]=='1' )
				track[i]=1;
			else if(s[i]=='0' && s[i+1]=='0')
				track[i]=-1;
		}
		for(ll i=0;i<s.length();i++)
			if(track[i]>0){
				mark=i;
				break;
			}
		for(ll i=mark+1;i<s.length();i++){
			if( track[i]==-1 ){
				flag=1;
				break;
			}
		}
//		for(ll i=0;i<s.length();i++)
//			cout<<track[i]<<" ";
//			cout<<endl;
		if(flag==1)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";			
		

	}
	return 0;
}
