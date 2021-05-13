#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

		ll n,flag1=0,flag2=0,x,mid,count=0;
		cin>>n;
		vector <ll> v,v1,v2,final;
		for(ll i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());		
		mid=n/2;
		for(ll i=0;i<mid;i++){
			x=v[i];
			v1.push_back(x);
		}
		for(ll i=mid;i<v.size();i++){
			x=v[i];
			v2.push_back(x);
		}
		ll j=0,i=0;
		while(1){
			if(i<v2.size()){
				final.push_back(v2[i]);
				i++;
			}
			else
				flag1++;
			if(j<v1.size()){
				final.push_back(v1[j]);
				j++;
				if(flag1==0 && (i+j!=n))
				count++;
			}
			else
				flag2++;
			if(flag1!=0 && flag2!=0)
				break;	
		}
		cout<<count<<"\n";
		for(ll i=0;i<final.size();i++)
		cout<<final[i]<<" ";
					cout<<"\n";
			
	return 0;
}
