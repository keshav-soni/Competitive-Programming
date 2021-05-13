#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define      all(x) 		(x).begin(),(x).end()
#define      fo(i,n)        for(ll i=0;i<n;i++)
#define      pb             push_back
const int MOD = 1e9 + 7;
using namespace std;

// Prime[] array to calculate Prime Number 
int prime[100001] = { 0 }; 

// Array k[] to store the value of k for 
// each element in arr[] 
int k[100001] = { 0 }; 

// For value of k, Sieve function is 
// implemented 
void Sieve() 
{ 
	// Initialize k[i] to i 
	for (ll i = 1; i < 100001; i++) 
		k[i] = i; 

	// Prime Sieve 
	for (ll i = 2; i < 100001; i++) { 

		// If i is prime then remove all 
		// factors of prime from it 
		if (prime[i] == 0) 
			for (ll j = i; j < 100001; j += i) { 

				// Update that j is not 
				// prime 
				prime[j] = 1; 

				// Remove all square divisors 
				// i.e. if k[j] is divisible 
				// by i*i then divide it by i*i 
				while (k[j] % (i * i) == 0) 
					k[j] /= (i * i); 
			} 
	} 
} 

// Function that return total count 
// of pairs with pefect square product 
int countPairs(ll arr[], ll n) 
{ 
	// Map used to store the frequency of k 
	unordered_map<ll, ll> freq; 

	// Store the frequency of k 
	for (ll i = 0; i < n; i++) { 
		freq[k[arr[i]]]++; 
	} 

	ll sum = 0; 

	// The total number of pairs is the 
	// summation of (fi * (fi - 1))/2 
	for (auto i : freq) { 
		sum += ((i.second - 1) * i.second) / 2; 
	} 

	return sum; 
} 

signed main()
{
    boost
    test{
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		fo(i,n)
			cin>>arr[i];
		Sieve(); 
	
		cout << countPairs(arr, n)+1 << endl; 
	}
	return 0;
}


