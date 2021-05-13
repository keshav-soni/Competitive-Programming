#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int n,k,x,q,all=0,size1=0,size2=0,all_diff=1;
		cin>>n>>k;
		vector <int> v,cost;
		set <int> s,freq,diff;  
		map <int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
			s.insert(x);
			diff.insert(x);
			size2=diff.size();
			if(size2==size1){
				diff.clear();
				diff.insert(x);
				all_diff++;
			}
			size1=diff.size();
		}
	    set <int> :: iterator i,j; 
    	for (i = s.begin(); i != s.end(); ++i)
    	{
			freq.insert(count(v.begin(), v.end(), *i));
			if(count(v.begin(), v.end(), *i)>1)
				all+=count(v.begin(), v.end(), *i);			
		}
	
//		for (i = freq.begin(); i != freq.end(); ++i)
//		{
//			if(*i>1){
//			q=(*i)*k;
//			for (j = i; j != freq.end(); ++j)
//			{
//				if(*j>(*i)*2)
//					q=q+(*j);
//				else if(*j<=(*i)*2 && *j>*i)
//					q=q+((*j)-*i)*2;				
//			}
//			cost.push_back(q);	
//			}
//		}	
		cout<<all<<"\n";
		cost.push_back(all+k);
		cost.push_back(all_diff*k);
		
		for (int i = 0; i < cost.size(); i++) 
	        cout << cost[i] << " "; 
			cout<<"\n"; 
	    cout <<*min_element(cost.begin(), cost.end())<<"\n"; 	
			
	}
	return 0;
}
