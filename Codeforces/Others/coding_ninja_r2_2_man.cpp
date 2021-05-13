#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>m,m1;
	map<int,int>::iterator it,it1;
	set<int>s;
	
	int x,temp,q,p,res,a1,a2,a3;
	cin>>x>>temp;
	for(int i=0;i<temp;i++){
		cin>>p>>q;
		s.insert(p);
		s.insert(q);
		m[p]++;
		m[q]++;
	}	
	for(it=m.begin();it!=m.end();it++)
		m1[it->second]++;
		
	res = m1.size();
	a1 = s.size();
	for(int i=0;i<=x;i++)
		s.insert(i);
	a2 = s.size();
	a3 = abs(a1-a2);
	res+=a3;	
	cout<<res<<"\n";
	
	return 0;	
}
