#include <bits/stdc++.h> 
using namespace std;

int main() {

	set <int> s;
	s.insert(10);
	s.insert(50);
	s.insert(7);
	s.insert(15);
	s.insert(100);
	set <int> :: iterator i;
	for(i=s.begin();i!=s.end();i++)
 		cout<<*i<<" ";
	
	return 0;
}
