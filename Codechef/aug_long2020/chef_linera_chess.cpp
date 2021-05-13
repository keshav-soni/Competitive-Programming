#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int n,k,x,flag=0;
		vector <int> v;
		cin>>n>>k;		
		for (int i=0; i<n; i++)
		{
			cin>>x;
			if(x<=k/2 && k%x==0)
			{
			v.push_back(x);
			flag++; 
			}
		}
		if(flag==0)
		{
			cout<<-1<<"\n";
			goto next;
		}
		sort(v.begin(),v.end());
		cout<<v.back()<<"\n";
		next:
			; 
	}
		return 0;
}
