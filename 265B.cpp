#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	
	int time=v[0];
	// time to eat and jump in between trees added seperately
	time=time+n+n-1;
	//now we just have to add the time to climd down / climb up
	for(int i=0;i<n-1;i++){
		if(v[i+1]>v[i]){
			time=time+v[i+1]-v[i];
		}
		else if(v[i+1]<v[i]){
			time=time+v[i]-v[i+1];
		}
	}
	cout<<time<<endl;
	return 0;
}
