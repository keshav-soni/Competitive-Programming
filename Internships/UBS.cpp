#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define      all(x) 		(x).begin(),(x).end()
#define      fo(i,n)        for(ll i=0;i<n;i++)
#define      pb             push_back
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    test{
    	string s,charValue;
    	int k;
    	cin>>s>>k>>charValue;
    	
		if (k == 0) 
			return 0; 
	
		int cnt=0,t1=0,t2=0,req=0; 
	
		while(t2<s.length()) { 	
			while(t2<s.length() && cnt<=k){ 
				int pos=s[t2]-'a'; 
				if (charValue[pos]=='0'){ 
					if(cnt+1>k) 
						break; 
					else
						cnt++; 
				} 	
				t2++; 
				if (cnt<=k) 
					req=max(req,t2-t1); 
			} 
	
			while(t1<t2){ 
				int pos=s[t1]-'a'; 
				t1++; 
				if (charValue[pos]=='0') 
					cnt--; 	
				if (cnt<k) 
					break; 
			} 
		} 
	
		cout<<req; 		

	}
	return 0;
}
