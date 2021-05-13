#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
     	ll n,flag=0;
		cin>>n;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		for(int i=0;i<n;i++){
			if(s1[i]!=s2[i]){
				flag=1;
				break;
			}
		}
		if(flag==1)
		 	cout<<"No";
		else 
			cout<<"Yes";
		cout<<"\n";	 	
	}
	return 0;
}
