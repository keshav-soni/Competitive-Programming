#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i += 2) {
			int x, y; 
			cin >> x >> y;
			if(x == y) {
				v.push_back(x);
				v.push_back(y);
			}
			 else
			  v.push_back(0);
		}
		cout << v.size() << "\n";
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout << "\n";
	}
}
