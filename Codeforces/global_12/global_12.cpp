#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n;
		vector<ll> v[n];
		set<ll> s;
		 set<ll>::reverse_iterator t;
		set<ll>::iterator t1;
		string str="";
		for(ll i=0;i<n;i++){
			cin>>x;
			s.insert(x);
		}
		if(s.size()==n && *t<=n)
			str+='1';	
		else
			str+='0';
		
		s.clear();
		
//		for (int i = 0; i < n - size + 1; i++) {
//        int current_sum = 0;
//        for (int j = 0; j < size; j++)
//            s.insert(a[i + j]);
// 
//        
//        max_sum = max(current_sum, max_sum);
//    }
		
		
		
		
		
		
		
		
			
	}
	return 0;
}
