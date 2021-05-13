#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)	{
		int n;
		cin>>n;
		string s;
		cin>>s;
    	bool temp = false;

	    if(s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0')
			temp = true;
	    if(s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[1]=='0')
			temp = true;
	    if(s[0]=='2' && s[n-1]=='0' && s[2]=='2' && s[1]=='0')
			temp = true;
	    if(s[0]=='2' && s[3]=='0' && s[2]=='2' && s[1]=='0')
			temp = true;
	    if(s[n-4]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0')
			temp = true;	
	
	    if(temp) 
			cout<<"YES";
	    else 
			cout<<"NO";
		cout<<"\n";	
	}
	return 0;
}
