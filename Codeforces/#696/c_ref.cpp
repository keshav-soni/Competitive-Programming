#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

vector<int> check(int n, vector<int> a, int x)
{
    multiset<int> s;
    for (auto e : a)
        s.insert(e);
    vector<int> res;
    for (int i=0; i<n; i++)
    {
        auto it1 = s.end();
        it1--;
        int y = x - *it1;
        s.erase(it1);
        auto it2 = s.find(y);
        if (it2 == s.end())
            return {};
        res.push_back(x - y);
        res.push_back(y);
        x = max(x - y, y);
        s.erase(it2);
    }
    return res;
}

int main()
{
    boost
    test{
     	int n;
	    cin >> n;
	    vector<int> a(2 * n);
	    for (int i=0; i <2*n; i++)
	        cin>>a[i];
	    sort(a.begin(), a.end());
	    for (int i=0; i <2*n-1; i++)
	    {
	        int x = a[i] + a[2*n-1];
	        vector<int> res = check(n, a, x);
//	        for(auto v:res)
//	        	cout<<v<<" ";
//	        cout<<"\n";	
	        if (res.size())
	        {
	            cout<<"YES\n";
	            cout<<x<<"\n";
	            for (int j=0; j<n; j++)
	                cout<<res[2*j]<<" "<<res[2*j+1]<<"\n";
	            goto next;
	        }
	    }
	    cout<<"NO\n";
		next : 
		;
	}
	return 0;
};




