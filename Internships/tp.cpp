#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
class Integer{
	int num;
	public:
		Integer(){
			num=0;
			cout<<"1";
		}
		Integer(int arg){
			cout<<"2";
			num=arg;
		}
		int fun(){
			cout<<"3";
			return num;
		}
};


int main()
{
    Integer i;
    i=10;
    cout<<i.fun();

	return 0;
}
