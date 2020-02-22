#include <bits/stdc++.h>
//#include <iostream> if above is slow
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int count(int arr[],int n){
	int list[n];
	for(int i=0;i<n;i++){
		list[i]=1;
	}
	for(int i=1;i<n;i++){
		if(arr[i]>=arr[i-1]){
			list[i]=list[i-1]+1;
		}
	}
//	print(list,n);
//	int max=list[0];
//	for(int i=1;i<n;i++){
//		if(list[i]>max){
//			max=list[i];
//		}
//	}
	return *max_element(list,list+n);
}
int main(){
	int N,temp;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>temp;
		arr[i]=temp;
	}
	cout<<count(arr,N);

return 0;
}

