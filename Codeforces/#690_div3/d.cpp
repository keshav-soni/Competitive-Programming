#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;;
		cin>>n;
		vector<int>v1(n+2,0);		
		for(int i=0;i<n;i++)
			cin>>v1[i];	
		for(int i=0;i<n;i++)
			sum+=v1[i];
		
		for(int i=0;i<n;i++)
		{
			if((sum%(n-i)) != 0)
				continue;
			int r = 0,wle = sum/(n-i);
			vector<int>v(n+2,0);
			
			for(int i=0;i<n;i++)
				v[i] = v1[i]; 			
			bool temp = true;
			
			for(int j=0;j<n;j++)
			{
				if(v[j] == wle)
					continue;
				else if(v[j] > wle)
					temp = false;
				else if(v[j] < wle){
					r++;
					v[j+1] += v[j];
				}
			}			
			temp &= (i==r);			
			if(temp)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
	return 0;
}
