#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int p1,p2,x,ans1,ans2;
		cin>>p1>>p2;
		if(p1<10 && p2<10)
		{
			cout<<1<<" "<<1<<"\n";
			goto next;
		}
		if(p1<10 || p2<10)
		{
			x=(p1>p2)?p2:p1;
			if(x==p1)
				cout<<0<<" "<<1<<"\n";
			else
				cout<<1<<" "<<1<<"\n";
			goto next;
		}
		ans1=ceil(p1/9.0);
		ans2=ceil(p2/9.0);
		if(ans1==ans2)
		{
			cout<<1<<" "<<ans2<<"\n";
			goto next;
		}
		x=(ans1>ans2)?ans2:ans1;
		if(x==ans1)
			cout<<0<<" "<<ans1<<"\n";
		else
			cout<<1<<" "<<ans2<<"\n";
		next:
			;
	}
	return 0;
}
