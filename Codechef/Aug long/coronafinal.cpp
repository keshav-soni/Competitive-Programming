#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,x,temp=1;
		cin>>n;
		vector <ll> v,c,ans,f1(n),f2(n),f3(n),f4(n),f5(n),final(n);
		for(int i=0;i<n;i++){
			cin>>x;
			c.push_back(i+1);
			v.push_back(x);
			f1.push_back(0);
			f2.push_back(0);
			f3.push_back(0);
			f4.push_back(0);
			f5.push_back(0);
			final.push_back(0);
		}
		
		if(	count(v.begin(),v.end(),0)==n ){
			cout<<1<<" "<<1;
		}
		else{
		for(int i=0;i<v.size();i++){
		 for(int j=0;j<v.size();j++){
		 	if(i!=j){	 		
		 		if(v[i]>v[j] && c[i]<=c[j])
		 			temp++;	 		
			 	else if(v[i]<v[j] && c[i]>=c[j])
					temp++;				 
			}
		 }
		 	if(temp!=0){
				ans.push_back(temp);
				temp=1;
			}
		}
		sort(ans.begin(),ans.end());
//		for(int i=0;i<ans.size();i++)
//		cout<<ans[i]<<" ";
//		cout<<"\n";
		cout<<ans.front()<<" ";	
		
		if(n>=3){
		f1[0]=2;
		 for(int j=0;j<n;j++){
		 	if(0!=j){	 		
		 		if(v[0]>v[j] && c[0]<=c[j])
		 			f1[j]=1;
			 	else if(v[0]<v[j] && c[0]>=c[j])
					f1[j]=1;				 
			}
		 }
		f2[1]=2;
		 for(int j=0;j<n;j++){
		 	if(1!=j){	 		
		 		if(v[1]>v[j] && c[1]<=c[j])
		 			f2[j]=1;
			 	else if(v[1]<v[j] && c[1]>=c[j])
					f2[j]=1;				 
			}
		 }
		 f3[2]=2;
		 for(int j=0;j<n;j++){
		 	if(2!=j){	 		
		 		if(v[2]>v[j] && c[2]<=c[j])
		 			f3[j]=1;
			 	else if(v[2]<v[j] && c[2]>=c[j])
					f3[j]=1;				 
			}
		 }
		}
		if(n>=4){
		 f4[3]=2;
		 for(int j=0;j<n;j++){
		 	if(3!=j){	 		
		 		if(v[3]>v[j] && c[3]<=c[j])
		 			f4[j]=1;
			 	else if(v[3]<v[j] && c[3]>=c[j])
					f4[j]=1;				 
			}
		 }
		}
		if(n>=5){
		 f5[4]=2;
		 for(int j=0;j<n;j++){
		 	if(4!=j){	 		
		 		if(v[4]>v[j] && c[4]<=c[j])
		 			f5[j]=1;
			 	else if(v[4]<v[j] && c[4]>=c[j])
					f5[j]=1;				 
			}
		 }
		}
		
		for(int i=0;i<n;i++){
			if(f1[i]==1 || f2[i]==1 || f3[i]==1 || f4[i]==1 || f5[i]==1 )
				final[i]=1;
		}
		if(count(final.begin(),final.end(),1)>ans.back())
			cout<<count(final.begin(),final.end(),1);
		else
			cout<<ans.back();		
		}			
		cout<<"\n";	
	}
	return 0;
}
