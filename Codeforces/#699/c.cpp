#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,m,go=0,flag=0,f=0;
		cin>>n>>m;
		ll a[n],b[n],c[m],updated[n],ans[m];
		map<ll,ll>m1,m2,m3;
		map<ll,ll>::iterator it;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<m;i++){
			cin>>c[i];
			m2[c[i]]++;
			ans[i]=0;
		}

		for(int i=0;i<n;i++){
			m3[b[i]]++;
			if(a[i]!=b[i]){
				m1[b[i]]++;
				updated[i]=b[i];
				go=1;
			}
			else
				updated[i]=0;
		}
		for(int i=0;i<n;i++){
			if( updated[i]!=0 && !m2[updated[i]] ){
				cout<<"NO";
				goto next;
			}				
		}
		for(int i=0;i<m;i++){
			if(m3[c[i]] )
				f=1;					
		}			
		if(f==0){
			cout<<"NO";
			goto next;			
		}	
		if(go==0){
			cout<<"YES\n";
			for(int i=0;i<n;i++){
				if(b[i]==c[n-1]){
					for(int i=0;i<m;i++)
						cout<<b[i]<<" ";
					goto next;	
				}
			}
		}
		else{
			for(it=m1.begin();it!=m1.end();it++){
				if( it->second!=m2[it->first]  ){
					cout<<"NO";
					flag=1;
					break;
				}
			}
			if(flag==0){
				cout<<"YES\n";				
					ll j=0;
				for(int i=0;i<n;i++){
					if(c[j]==updated[i]){
						ans[j]=i+1;
						j++;
					}
					else if( c[j]!=updated[i] && updated[i]!=0 && j!=m-1 ){
						ans[j]=-1;
						j++;
						i--;
					}						
				}
				for(int i=0;i<m;i++)
					if(ans[i]==-1)
						cout<<ans[m-1]<<" ";
					else	
						cout<<ans[i]<<" ";
			}
		}
		next :
		cout<<"\n";	
	}
	return 0;
}
