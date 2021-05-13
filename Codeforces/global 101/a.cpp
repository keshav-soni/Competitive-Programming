#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
		string x;
		cin>>x;		
		if(x.size()%2 != 0)
			cout<<"NO";
		else if(x[0] == ')' || x[x.size()-1] == '(')
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";	
	}
	return 0;
}
