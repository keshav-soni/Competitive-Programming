#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		string s;
		cin>>s;
		set<char> se;
		if(s.length()==1){
			cout<<s;
			goto next;
		}
			
		for(int i=0;i<s.length();i++){
			if( i==s.length()-1 ){
				se.insert(s[i]);
//				cout<<s[i]<<" "<<i<<endl;
			}
			else if(s[i]!=s[i+1]){
				se.insert(s[i]);
//				cout<<s[i]<<" "<<i<<endl;
			}
			else
				i+=1;
		}
		for( auto x:se)
			cout<<x;
	next :	
		cout<<"\n";

	}
	return 0;
}
