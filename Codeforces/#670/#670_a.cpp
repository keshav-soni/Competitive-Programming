#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x,prev=0,ans1=0,ans2=0,pre=0;
		int i,flag=0;
		cin>>n;
		set <int> s1,s2;
		vector <int> v1,v2;
		for(int i=0;i<n;i++){
			cin>>x;
			s1.insert(x);
			if(s1.size()==prev){
				s2.insert(x);
				if(s2.size()!=pre)
					v2.push_back(x);
			}
			else
				v1.push_back(x);
			prev=s1.size();
			pre=s2.size();	
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		if(v2.size()==0){
			for ( i=0;i<v1.size();i++){
				if(v1[i]!=i){
					ans1=i;
					flag=1;
					break;
				}
			}
			if(flag==0)
				ans1=i;
			cout<<ans1;
		}
		
		else{
			flag=0;
			for ( i=0;i<v1.size();i++){
				if(v1[i]!=i){
					ans1=i;
					flag=1;
					break;
				}
			}
			if(flag==0)
				ans1=i;
			
			
			flag=0;
			for ( i=0;i<v2.size();i++){
				if(v2[i]!=i){
					ans2=i;
					flag=1;
					break;
				}
			}
			if(flag==0)
				ans2=i;
				
			cout<<ans1+ans2;	
		}
		
//		for (int i=0;i<v1.size();i++)
//		cout<<v1[i]<<" ";
//		cout<<"\n";
//		for (int i=0;i<v2.size();i++)
//		cout<<v2[i]<<" ";
//		cout<<"\n";

		
		cout<<"\n";
		
				
	}
	return 0;
}



		
//				if(*itr!=i){
//					ans1=i;
//					flag=1;
//					cout<<i<<" "<<*itr<<" ";
//					break;
//				}		
//			}
//			if(flag==0)
//				cout<<i-1;
//			else
//			cout<<ans1;
//			goto next;
//		}
//		flag=0;
//		for (itr = s1.begin(),i=0; itr != s1.end(),i<=100; ++itr,i++){
//		
//				if(*itr!=i){
//				flag=1;
//				ans1=i;
//				cout<"dfv";
//				break;
//			}		
//		}
//			if(flag==0)
//				ans1=i-1;	
//		for (itr = s2.begin(), i=0; itr != s2.end(),i<=100; ++itr,i++){
//		
//				if(*itr!=i){
//				flag=1;
//				ans2=i;
//				cout<<"rtb";
//				break;
//			}		
//		}
//			if(flag==0)
//				ans2=i-1;
//				
//				
//				cout<<"\n";
//		for (itr = s1.begin(); itr != s1.end(); ++itr)
//		cout<<*itr<<" ";
//		cout<<"\n";
//		for (itr = s2.begin(); itr != s2.end(); ++itr)
//		cout<<*itr<<" ";
//		cout<<"\n";
//		cout<<ans1<<" "<<ans2;















//		
//		if(s2.size()==0){
//			itr=s1.begin();
//			if(*itr==0){
//				itr++;
//			for (; itr != s1.end(); ++itr){
//					if(*itr != *(--itr)+1 ){
//						ans1=*(--itr)+1;
//						flag=1;
//						break;
//					}
//				}
//				if(flag==0)
//					ans1=*(--itr);
//			}
//			else{
//				ans1=0;			
//			}
//		}
//		else{
//			flag=0;
//			itr=s2.begin();
//			if(*itr==0){
//				++itr;
//			for (itr; itr != s1.end(); ++itr){
//					if(*itr != *(--itr)+1 ){
//						ans1=*(--itr)+1;
//						flag=1;
//						break;
//					}
//				}
//				if(flag==0)
//					ans1=*(--itr);
//			}
//			else{
//				ans1=0;			
//			}			
//			
//			flag=0;
//			itr=s2.begin();
//			if(*itr==0){
//				++itr;
//			for (itr; itr != s2.end(); ++itr){
//					if(*itr != *(--itr)+1 ){
//						ans2=*(--itr)+1;
//						flag=1;
//						break;
//					}
//				}
//				if(flag==0)
//					ans2=*(--itr);
//			}
//			else{
//				ans2=0;			
//			}
//			
//			
//		}
