#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,th,time,cnt=0;
		cin>>n>>th;
		for(int i=0;i<n;i++)
		{
			cin>>time;
			if(time<=0)
			cnt++;
		}	
		if(cnt>=th)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}		
	return 0;
}

