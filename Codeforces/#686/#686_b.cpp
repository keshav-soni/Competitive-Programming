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
		map <int,int> m;
		map<int, int>::iterator itr; 
		for(int i=0;i<n;i++){
			cin>>x;
			m[x]++;
		}
		
		for (itr = m.begin(); itr != m.end(); ++itr) { 
			if(itr->second == 1){
				cout<<itr->first;
				break;
			}
		}
		cout<<"\n";
	}
	return 0;
}
