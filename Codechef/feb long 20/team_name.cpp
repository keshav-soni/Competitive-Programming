#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,prev=0,cnt=0,f1=0,f2=0,prev2=0;
		cin>>n;
		char temp;
		string x,y;
		vector <string> v;
		set <string> s;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			s.insert(x);
		}
		
		for(int i=0;i<n;i++){			
				x=v[i];
			for(int j=0;j<n;j++){
				y=v[j];
				if(x[0]!=y[0]){
					prev=s.size();
					
					temp=x[0];
					x[0]=y[0];
					y[0]=temp;
					
					prev2=s.size();
					s.insert(x);
					if(prev2+1==s.size()){
						f1=1;
						prev2=s.size();	
					}
					
					s.insert(y);	
					if(prev2+1==s.size()){
						f2=1;
						prev2=s.size();	
					}
					
					if(s.size()==prev)
						cnt++;
					else{
						if(f1==1)
							s.erase(x);
						if(f2==1)	
							s.erase(y);
					}
					f1=0;
					f2=0;
				}	
			}
		}
		cout<<cnt*2<<"\n";
//		for(auto x:s)
//			cout<<x<<" ";
	}
	return 0;
}
