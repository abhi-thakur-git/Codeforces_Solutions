#include <bits/stdc++.h>
#define ll long long
//#include <iostream> if above is slow
using namespace std;
//void print(ll arr[],ll max){
//	for(int i=0;i<=max;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
ll counter(ll arr[],ll n){
	ll frq[100001];
	memset(frq,0,sizeof(frq));
	ll min=arr[0];
	ll max=arr[0];
	for(ll i=0;i<n;i++){
		frq[arr[i]]++;
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
	}
//	for(int i=0;i<=max;i++){
//		cout<<frq[i]<<" ";
//	}
//	cout<<endl;
//	cout<<min<<" "<<max<<endl;
	ll dp[max+1];
	memset(dp,0,sizeof(dp));
	for(ll i=min;i<=max;i++){
		if(i==min){
			// best we can get
			dp[i]=min*frq[min];
		}
		else if(i==min+1){
			dp[i]=std::max(dp[i-1],i*frq[i]);
		}
		else{
			dp[i]=std::max(dp[i-1],dp[i-2]+i*frq[i]);
		}
//		print(dp,max);
	}
	return dp[max];	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	ll n,temp;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>temp;
		arr[i]=temp;
	}
	cout<<counter(arr,n);
	return 0;
}

