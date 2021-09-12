#include<bits/stdc++.h>
#define ll long long int
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test   ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 		push_back
#define inout  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
//clock_t time_p  = clock();
//void rtime()   {time_p = clock() - time_p; cout << "\nTime Taken : " << fixed << (float)(time_p) / CLOCKS_PER_SEC << "s\n";}

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

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void solve(){
	int k,n;
	int len;
	cin>>len>>k>>n;
	Node *root=NULL;
	Node * curr=NULL;
	for(int i=0;i<len;i++){
		int x;
		cin>>x;
		if(root==NULL){
			root=new Node(x);
			curr=root;
		}
		else{
			curr->next=new Node(x);
			curr=curr->next;
		}				
	}
	curr->next=NULL;

	int t=len-k;
	Node* mid=root;
	while(t>1){
		mid=mid->next;
		t--;
	}
	Node * to=root;
	while(n>1){
		to=to->next;
		n--;
	}
	Node * store=to->next;
	to->next=mid->next;
	Node * t1=mid->next;
	while(k>1){
		t1=t1->next;
		k--;
	}
	t1->next=store;
	mid->next=NULL;
		while(root){
		cout<<root->data<<" ";
		root=root->next;	
		}
		
}

signed main()
{
    boost
//	#ifndef ONLINE_JUDGE
//	    inout;           
//	#endif
	ll T; cin>>T;
    for(ll i=0;i<T;i++){
    	//cout << "Case #" << i << ": ";    // Kickstart
		solve();
	}
	// rtime();
}
