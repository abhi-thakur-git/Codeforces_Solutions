#include <bits/stdc++.h>
using namespace std;
int mod(int a, int m) 
{ 	//refer modulo airthmetics
    return (a%m + m) % m; 
} 
int main(){
	int x,y,n;
	cin>>x>>y;
	cin>>n;
	
	int M=1e9+7;
	// series will be in x, y, y-x, -x, -y, x-y, x, y, y-x, -x... so on
	
	if((n-1)%6==0){
		cout<<mod(x,M)<<endl;
	}
	else if((n-2)%6==0)
	{
		cout<<mod(y,M)<<endl;
	}
	else if((n-3)%6==0)
	{	
		cout<<mod(y-x,M)<<endl;
	}
	else if((n-4)%6==0)
	{
		cout<<mod(-x,M)<<endl;
	}
	else if((n-5)%6==0)
	{
		cout<<mod(-y,M)<<endl;
	}
	else{
		cout<<mod(x-y,M)<<endl;
	}
	return 0;
}
