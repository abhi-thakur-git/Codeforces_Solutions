#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	n=3;
	vector<vector<int> > vec(n,vector<int> (n,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>temp;
			vec[i][j]=temp;
		}	
	}	 
	//solving using brute force method
	for(int i=0;i<=100000;i++){
		vec[0][0]=i;
		vec[1][1]= i+ vec[0][2]-vec[2][1];
		vec[2][2]= i+ vec[0][1]-vec[1][2];
	
		int a=vec[0][0]+vec[0][1]+vec[0][2];
		int b=vec[1][0]+vec[1][1]+vec[1][2];
		int c=vec[2][0]+vec[2][1]+vec[2][2];
		int d=vec[0][0]+vec[1][1]+vec[2][2];
		int e=vec[0][1]+vec[1][1]+vec[2][1];
		int f=vec[0][2]+vec[1][2]+vec[2][2];
		int g=vec[0][0]+vec[1][1]+vec[2][2];
		int h=vec[0][2]+vec[1][1]+vec[2][0];
		if(a==b && b==c && c==d && d==e && e==f && f==g && g==h){
			break;
		}	

	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
