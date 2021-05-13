#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,x,s1=0,s2=0,turn=0;
     	cin>>n;
     	vector <ll> a,b;
     	for(int i=0;i<n;i++){
     		cin>>x;
     		if(x%2==0)
     			a.push_back(x);
     		else
			  	b.push_back(x);	
		}
     	ll as,bs;
		as=a.size(); 	
		bs=b.size();
		vector<ll>::iterator i1,i3,i4;	
		vector<ll>::iterator i2;
		i1=a.begin();
		i2=a.rbegin();
		i3=b.begin();
		i4=b.rbegin();		
		
		while(n--){
		if(turn == 0){
			if( a[a.size()-1] < b[b.size()-1] )
				b.erase(i4);
			else{
				s1+=a[a.size()-1];
				a.erase(i2);
			}
			turn =1;	
		}
		else{
			if( b[b.size()-1] < a[a.size()-1] )
				a.erase(i4);
			else{
				s2+=b[b.size()-1];
				b.erase(i2);
			}
			turn =0;				
		}	
		}
		if(s1>s2)
			cout<<"Alice";
		else if(s1<s2)
			cout<<"Bob";
		else 	
			cout<<"Tie";
		cout<"\n";			 
	}
	return 0;
}
