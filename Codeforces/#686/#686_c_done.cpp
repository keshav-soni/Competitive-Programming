#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x,prev,first,last;
		cin>>n;
		map <int , int> m;
		map <int , int>::iterator itr;
		vector <int> v,v1;
		
		for(int i=0;i<n;i++){
			cin>>x;
			if(i==0){
				first = x;
				v.push_back(x);
			}
			if( i==n-1 )
				last = x;	
			if( i>0 && prev!=x)
				v.push_back(x);
				
			prev=x;	
		}
		
		for(auto i:v){
			m[i]++;
//			cout<<i<<" ";
		}
//		cout<<"\n";
		if(m.size()==1){
			cout<<0;
			goto next;
		}
			
		for( itr=m.begin();itr!=m.end();itr++){
			if(itr->first==first && itr->first==last )
				v1.push_back(itr->second+1-2);
			else if(itr->first==first || itr->first==last )
				v1.push_back(itr->second+1-1);
			else
				v1.push_back(itr->second+1);		
		}
		cout<<*min_element(v1.begin(),v1.end());
		next :
			cout<<"\n";
				
		
	}
	return 0;
}
