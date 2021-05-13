#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
//    boost
		string s;
		cin>>s;
		
		for(int i=0;i<s.length();i++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
					s.erase(s.begin()+i);	
		for(int i=0;i<s.length();i++){
			if( s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u'  )
				s.insert(s.begin()+i,'.');
		}	
		for (char c : s) {
    		if(c>=65 && c<=90)
				c=c+32;					
		}
		cout<<s<<"\n";
	return 0;
}
