#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
if(s[8]=='P')
{  
   if(s[1]<'8')
   {
    s[1]=s[1]+2;
    s[0]=s[0]+1;
   }
   else if(s[1]=='8')
   {
   	    s[1]=48;
       	s[0]=s[0]+2;
       }
   else{
    s[1]=49; 
	s[0]=s[0]+2;
    }
}
   s[8]='\0';
   s[9]='\0';
   cout<<s;
  
    return 0;
}

