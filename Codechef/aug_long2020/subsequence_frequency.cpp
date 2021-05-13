#include<bits/stdc++.h> 
using namespace std; 

bool cmp(pair<int, int>& a,pair<int, int>& b) 
{ 
    return a.second < b.second; 
} 

void sort(map<int, int>& M) 
{ 
    vector<pair<int, int> > A; 

	map<int, int>::iterator i; 
    for (i = M.begin(); i != M.end(); ++i) { 
      	A.push_back(i); 
	  } 
    sort(A.begin(), A.end(), cmp); 
	it = A.begin();
	cout<<it.first<<endl;
} 

void printSubsequences(int arr[], int n) 
{ 
	unsigned int opsize = pow(2, n); 

	for (int counter = 1; counter < opsize; counter++) 
	{ 
		for (int j = 0; j < n; j++) 
		{ 
			vector <int> v;
			if (counter & (1<<j))
			{
				v.push_back(arr[j]); 
			} 
			if(j=n-1)
			{
				map <int,int> x;
				map<int, int>::iterator q; 
				for(auto k=v.begin();k!=v.end();k++)
				{
					x.insert(pair<int, int>(*k, count(vect.begin(), vect.end(), *k))); 
				}
				sort(x); 
			}	
		} 
	} 
} 

int main() {
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int n;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++)
			cin>>arr[i]; 
		cout << "All Non-empty Subsequences\n"; 
		printSubsequences(arr, n); 
	}
	return 0; 
} 

