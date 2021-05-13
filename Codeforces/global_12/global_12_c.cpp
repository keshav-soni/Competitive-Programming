#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 305;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
	string s[N];
		    cin >> n;
    int cnt[3] = {0, 0, 0};
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        for(int j = 0; j < n; j++) {
            if(s[i][j] == 'X') {
                cnt[(i + j) % 3]++;
            }
        }
    }
    int val = min_element(cnt, cnt + 3) - cnt;
    cout<<val<<" "<<min_element(cnt, cnt + 3)<<"\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(s[i][j] == 'X' && (i + j) % 3 == val) {
                s[i][j] = 'O';
            }
        }
        cout << s[i] << '\n';
    }
	}
	return 0;
}
