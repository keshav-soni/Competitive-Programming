#include<bits/stdc++.h>
using namespace std;

bool go( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 return v1[2] < v2[2]; 
} 

string find_min_days(int profit[], int price[])
{
	string final;
		int n = sizeof(profit)/sizeof(profit[0]);
		int m = sizeof(price)/sizeof(price[0]);
		
	for(int i=0;i<n;i++){
		int req=profit[i];
		vector<vector<int>> v;
		string first,last;

		for(int j=0;j<m;j++){
			for(int k=j+1;k<m;k++){
				if(price[k]-price[j]==req){
					vector <int> x;
					x.push_back(j+1);
					x.push_back(k+1);
					x.push_back(k-j);
					v.push_back(x);	
						
				}
			}
			sort(v.begin(),v.end(),go);
			first=to_string(v[i][0]);
			last=to_string(v[i][1]);
			final+=first;
			final+=" , ";
			final+=last;
		}
		
	}
    return final;

}

int main ()
{
	int n,d,i;
	string answer="";
	cin>>n>>d;
	int price[n];
	int profit[d];
	for (i=0;i<n;i++)
		cin>>price[i];
	for (i=0;i<d;i++)
	    cin>>profit[i];
    answer = find_min_days(profit,price);

    // Do not remove below line
	cout<<answer<<endl;
    // Do not print anything after this line

	return 0;
}
