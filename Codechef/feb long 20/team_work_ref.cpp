#include<bits/stdc++.h>
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           int t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		int n,cnt=0,req=0;
		cin>>n;
		map<string,vector<char>> m;
		map<char,int>m1;
		string s;
		for(int i=0;i<n;i++){			
			cin>>s;
			m[s.substr(1)].push_back(s[0]);
		}		
		for(auto it:m)
			for(int i=0;i<it.second.size();i++)
				m1[it.second[i]]++;
				
			for(auto it:m)
			{
				for(auto it2:m)
				{
					if(it.first!=it2.first)
					{
						set<char>tp(it.second.begin(),it.second.end());
						req = 0;
						for(auto it3:it2.second)
							if(tp.find(it3)!=tp.end())
								req++;
								
						cnt+=(it.second.size()-req)*(it2.second.size()-req);						
					}
				}
			}			
			cout<<cnt<<"\n";
	}
	return 0;
}

