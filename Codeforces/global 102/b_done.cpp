	#include<bits/stdc++.h>
	#define ll long long int
	#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#define      test           ll t; cin>>t; while(t-->0)
	using namespace std;
	signed main()
	{
	    boost
	    test{
			string a,b;
			cin>>a>>b;
			string t1=a,t2=b;
			int cnt=0,flag=0;
			ll x,y,gc,lc;	
			if(a==b){
				cout<<a;
				goto next;
			}
			
			 x = a.size();
			 y = b.size();
			 gc = __gcd(x,y);
			 lc = (x*y)/gc;	
		
			for(int i=0;i<lc;i++){
				if( a.length()<b.length() ){
					a+=t1;
					cnt++;
				}
				else if( a.length()>b.length() )
					b+=t2;
				if( a==b ){
					flag=1;
					for(int j=0;j<=cnt;j++)
						cout<<t1;
					break;	
				}	
	//			cout<<a<<" "<<b<<endl;
			}
			if(flag==0)
				cout<<-1;
		next :		
			cout<<"\n";				
				
			}	
		return 0;
	}
