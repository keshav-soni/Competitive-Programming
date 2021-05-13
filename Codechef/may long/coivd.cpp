#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		vector <int> v;
		int n,person,prev,cnt=1;		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			if(i==0)
				cin>>person;
			else{
				cin>>person;
				if(abs(person-prev)<=2)
				cnt++;
				else
				{
					if(cnt!=0)
					v.push_back(cnt);	
					cnt=1;
			    }
		    }
			prev=person;
		}
		v.push_back(cnt);	
//		   vector<int>::iterator j;
//		 for (j = v.begin(); j != v.end(); ++j) 
//        cout << *j << " "; 
//        cout<<endl;
		cout<< *min_element(v.begin(), v.end())<<" "<<*max_element(v.begin(), v.end())<<endl; 
	}
	return 0;
}
