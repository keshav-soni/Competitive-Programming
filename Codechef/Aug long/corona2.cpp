#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,x,y1,y2,temp=0,descend=0,prev=0;
		cin>>n;
		vector <ll> v,t;
		set <ll> s;
		set <ll> :: iterator itr;
		for(ll i=0;i<n;i++){
			cin>>x;
			v.push_back(x);			
			if(x<=prev || descend==0){	
				descend++;
			}
			else{
				s.insert(descend);
				descend=0;
				descend++;	
				
			prev=x;				
			}		
			if(i==0)
			prev=x;
		}
		if(descend!=0)
			s.insert(descend);
		if(	count(v.begin(),v.end(),0) ==n ){
			cout<<1<<" "<<1;
		}
		else
		{
			for(ll i=0;i<v.size();i++){
				y1=v[i];
				temp++;
				for(ll j=i+1;j<v.size();j++){
					y2=v[j];
					if(y1>=y2)
						temp++;	
				}
				if(temp!=0)
					t.push_back(temp);
		
				temp=0;
			}
			
			sort(t.begin(),t.end());
			itr=s.begin();
			cout<<*itr;
			cout<<" ";
			if(t.size()!=0)
				cout<<t.back();
			else
				cout<<*itr;
				
		}
	cout<<"\n";
//	for(int i=0;i<t.size();i++)
//	cout<<t[i]<<" ";
//	cout<<"\n";
//	cout<<t.size();
}
return 0;
}
