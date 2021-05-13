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
		char a[s.length()];	
		
		for(int i=0;i<s.length();i++)
			a[i]=s[i];
//			
//		for(int i=0;i<s.length();i++)
//			cout<<a[i];
		for(int i=0;i<s.length();i++){
			if( i%2==0 && a[i]>97 )
				a[i]=97;
			else if( i%2==0 && a[i]==97 )
				a[i]++;
			else if( i%2!=0 && a[i]<122 )
				a[i]=122;
			else if( i%2!=0 && a[i]==122 )
				a[i]--;				
		}
		for(int i=0;i<s.length();i++)
			cout<<a[i];		
		cout<<"\n";	
	}
	return 0;
}
