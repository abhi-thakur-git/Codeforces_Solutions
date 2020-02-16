#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll func(ll n,ll g,ll b){
	ll needG=(n+1)/2;
	ll totalG=needG/g *(g+b);
	if(needG%g==0){
		totalG=totalG-b;
	}
	else{
		totalG=totalG+needG%g;
	}
	return max(totalG,n);
}

int main(){
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		ll n,g,b;
		cin>>n>>g>>b;
		cout<<func(n,g,b)<<endl;
	}
}

