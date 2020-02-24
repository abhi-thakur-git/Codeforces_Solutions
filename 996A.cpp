#include <bits/stdc++.h>
//#include <iostream> if above is slow
using namespace std;
int minbill(int n){
	int arr[]={1,5,10,20,100};
	int i=4;
	int count=0;
	while(n>0){
		if(n<arr[i]){
			i--;
		}
		else{
			n=n-arr[i];
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<minbill(n)<<endl;
	return 0;
}

