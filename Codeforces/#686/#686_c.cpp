#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,cnt=0;
		cin>>n;
		vector <int> v;	
		if(n%2!=0){
			while(n%3==0 && (n/3)%3==0 ){
				cnt++;
				v.push_back(3);
				n=n/3;
			}
			v.push_back(n);
		}
		else{
			while(n%2==0 && (n/2)%2==0 ){
				cnt++;
				v.push_back(2);
				n=n/2;
			}
			v.push_back(n);
		}
		
			cout<<cnt+1<<"\n";
			cout<<v.size()<<endl;
	 		for (auto i = v.begin(); i != v.end(); ++i)
				cout<<*i<<" ";
			cout<<"\n";
			
			
	}
	return 0;
}
