#include<bits/stdc++.h>
using namespace std;


long long int fun1(long long int var1,long long int number)
{
    long long int var=1;
    while(number)
    {
        if(number&1)
        var = var*var1 %1000000007;
        number=number/2;
        var1=var1*var1 %1000000007;        
    }
    return var;
}
long long int fun2(long long int result,long long int tex)
{    
    long long int var1 = (result%1000000007 *(fun1(tex,1000000007-2)%1000000007))%1000000007;
    return var1;
}
long long int fun4(long long int var3,long long int var)
{
    long long int var4,j;
    
	j = min(var,var3-var);
    var4=1;
	for(int i=0;i<j;i++){
	var4 = (var4%1000000007 *(var3-i)%1000000007)%1000000007; 
	var4=fun2(var4,i+1);
	}
    return var4%1000000007;
}
int main()
{
    long long int test;
    cin>>test;
    for(int w=0;w<test;w++)
    {
        long long int number,var5=0,var6=0,answer=0;
        cin>>number;
        long long int arr[number];
        for(long long int i=0;i<number;i++)
            cin>>arr[i];
        var5 = *max_element(arr,arr+number);
        for(long long int i=0;i<number;i++)
        {
            if(var5==arr[i])
                var6++;
        }
        answer =0;
        if(number==1)
        {
            cout<<"2"<<endl;
            continue;
        }       
        if(var6%2 !=0)
            answer = fun1(2,number)%1000000007;
        else
            answer  = fun1(2,number)%1000000007 - ((fun1(2,number-var6)%1000000007) * fun4(var6,var6/2)%1000000007)%1000000007;    
        
        answer = (answer+1000000007)%1000000007;
        cout<<answer%1000000007<<endl;        
    }
}
