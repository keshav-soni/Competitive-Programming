#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
		string a;
		cin>>a;
		set<char>d;		
		for(int i=0;i<a.size();i++)
			d.insert(a[i]);		
		if(d.size() == a.size())
			cout<<"0"<<endl;
		else
		{
			vector<ll>k;
			for(auto x:d)
			{
				int c = count(a.begin(),a.end(),x);
				k.push_back(c);
			}			
			sort(k.begin(),k.end(),greater<int>());
			cout<<k[0]<<"\n";
		}
	}
	return 0;
}
