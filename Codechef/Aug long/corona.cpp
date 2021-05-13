#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,x,ascend=0,descend=0,prev=0;
		cin>>n;
		vector <ll> v;
		set <ll> s;
		set <ll> :: iterator itr;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			if(x<prev || descend==0){	
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
		if(	count(v.begin(),v.end(),0)==n ){
			cout<<1<<" "<<1;
		}			
		else{
			itr=s.begin();
			cout<<*itr;
			cout<<" ";
    		for (itr = s.begin(); itr != s.end(); itr++){
    			;
			}
			itr--;
			cout<<*itr;			
		}
		cout<<"\n";
//		for (itr = s.begin(); itr != s.end(); itr++){
//    			cout<<*itr<<" ";
//		}
//		cout<<"\n";
	}
	return 0;
}
	
