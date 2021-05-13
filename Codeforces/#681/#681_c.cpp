#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,min=INT_MAX,x=0,max=INT_MIN;
		cin>>n;
		int a[2][n];
		int arr[n];
		multimap<int, int, greater <int> > m;
				    multimap<int,int> :: iterator it; 
		    int k=0;
		
		for(int i=0;i<2;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
				
		for(int i=0;i<n;i++)
			x+=a[1][i];
			
			for(int i=0;i<n;i++)
				if(max<a[0][i])
					max=a[0][i];
					
			if(x<max){
				cout<<x;
				goto next;
			}
				
					
		for(int j=0;j<n;j++)
			m.insert(make_pair(a[0][j],a[1][j]));
		  

		    for (it=m.begin() ; it!=m.end() ; it++){
				if(sum>(*it).first)		    	
		    		arr[k]=sum;
		    	else
					arr[k]=(*it).first;	
//		        cout << "(" << (*it).first << ", " << (*it).second << ")" << endl; 
		        sum+=(*it).second;
		        k++;
			} 
			for(int i=0;i<n;i++)
				if(min>arr[i])
					min=arr[i];
		
		cout<<min;
			next :
				cout<<"\n";
	}
	return 0;
}
