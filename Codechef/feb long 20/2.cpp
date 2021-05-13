#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,k,x=0,flag=0;
		cin>>n>>k;
		ll a[n];
		ll b[k];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<k;i++){
			cin>>x;
			if(i==0)
				b[i]=x-1;
			else	
			b[i]=x+b[i-1];
		}
		for(int i=0;i<k;i++){
			if(i==0)
			sort(a,a+b[i]+1);
			else
				sort(a+b[i-1]+1,a+b[i]+1);
		}		
		map<int,int>m;
		map<int,int>::iterator it,it2;
		for(int i=0;i<k;i++){
			if(i==0)
			m.insert(pair<int,int>(a[0],a[b[i]]));
			else
				m.insert(pair<int,int>(a[b[i-1]+1],a[b[i]]));
		}
//				for(auto x:m)
//			cout<<x.first<<" "<<x.second<<endl;	
		for(it=m.begin();it!=m.end();it++){
			if(it==m.begin())
				++it;
			else{
				it2=prev(it,1);	
				if(it->first < it2->second){
//					cout<<it->first<<" "<<it->second<<endl;
					flag=1;
					break;
				}
			}	
				
		}
				if(flag==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";	

	}
	return 0;
}
/*
1
8 3
4 2 3 19 23 15 11 12
3 3 2
*/
