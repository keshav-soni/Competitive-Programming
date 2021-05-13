#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;

int main()
{
	long int m,k;
    cin>>m>>k;
    long int first[m];
    long int second[m];
    for(int i=0;i<m;i++)
    {
    	cin>>first[i];
        second[i]=first[i]-k;
	}
    long int n = sizeof(first) / sizeof(first[0]); 
  
    vector<long int> v1(m); 
    vector<long int>::iterator it, ls; 
  
    sort(first, first + m); 
    sort(second, second + m); 

    // set_intersection 
    ls =set_intersection(first, first + m, second, second + m, v1.begin()); 
  
    cout <<(ls - v1.begin()); 
//    for (it = v1.begin(); it != ls; ++it) 
//        cout << ' ' << *it;
	
		return 0;
}
