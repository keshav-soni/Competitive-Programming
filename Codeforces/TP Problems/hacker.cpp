#include<bits/stdc++.h>
#define ll long long int
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test   ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 		push_back

inline ll gcd(ll a,ll b){if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a,ll b){return (a / gcd(a, b) * b);}
inline bool isprime(ll n){ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}
inline ll ceil(ll num,ll den){return ((num + den - 1) / den);}

const int MOD = 1e9 + 7;
using namespace std;

void trace(ll x){cout<<x<<"\n";}
void trace(ll a[],ll n){for(ll i=0;i<n;i++)cout<<a[i]<<" ";	cout<<"\n";}
void trace(vector<ll> v){for(auto x:v)cout<<x<<" "; cout<<"\n";}
void trace(map<ll,ll> m){for(auto x:m)cout<<x.first<<" -> "<<x.second<<"\n";}

int DecreasingArray(vector<int> a)
{
    int sum = 0, dif = 0;
 	int n = a.size();
    priority_queue<int, vector<int>, greater<int> > pq;
 
    for (int i = 0; i < n; i++) {
        if (!pq.empty() && pq.top() < a[i]) {
            dif = a[i] - pq.top();
            sum += dif;
            pq.pop();
        }
        pq.push(a[i]);
    }
 
    return sum;
}

int getMinimumOps(vector<int> ar)
{
    int n = ar.size();
 
    int small = *min_element(ar.begin(), ar.end());
 
    int large = *max_element(ar.begin(), ar.end());

    int dp[n][large + 1];
    for (int j = small; j <= large; j++) {
        dp[0][j] = abs(ar[0] - j);
    }
    for (int i = 1; i < n; i++) {
        int minimum = INT_MAX;
        for (int j = small; j <= large; j++) {

            minimum = min(minimum, dp[i - 1][j]);
            dp[i][j] = minimum + abs(ar[i] - j);
        }
    }
 
    int ans = INT_MAX;
    for (int j = small; j <= large; j++) {
        ans = min(ans, dp[n - 1][j]);
    }
 
    return ans;
}

signed main()
{
    boost
    vector<int> a{1,2,3,3,4};
    cout << min(DecreasingArray(a),getMinimumOps(a));
	return 0;
}

long fun1(vector<int> v)
{
    long res=0;
    int n=v.size();
    priority_queue<int,vector<int>,greater<int>> pq; 
    for (int i=0;i<n;i++) {
        if (!pq.empty() && pq.top()<v[i]){
            res+=v[i]-pq.top();
            pq.pop();
        }
        pq.push(v[i]);
    } 
    return res;
}

long fun2(vector<int> v)
{
    int n = v.size();  
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    long res = INT_MAX;
    int t[n][max + 1];
    for (int j=min; j<=max;j++)
        t[0][j] = abs(v[0] - j);
    for (int i =1;i<n;i++) {
        int temp=INT_MAX;
        for (int j = min; j <= max; j++){
            if(temp<t[i - 1][j])
                temp=t[i - 1][j];
            t[i][j]=temp+abs(v[i] - j);
        }
    }    
    for (int j=min;j<=max;j++) {
        if(res>t[n - 1][j])
            res=t[n - 1][j];
    } 
    return res;
}

long modifyArray(vector<int> arr) {
    return min(fun1(arr),fun2(arr));         
}
