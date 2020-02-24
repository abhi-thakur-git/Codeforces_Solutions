#include <bits/stdc++.h>
//#include <iostream> if above is slow
using namespace std;
int count(int boys[],int b,int girls[],int g){
	int table[b+1][g+1];
	memset(table,0,sizeof(table));
	for(int i=0;i<=b;i++){
		for(int j=0;j<=g;j++){
				if(i==0 || j==0){
					table[i][j]=0;
				}
				else{
				
					if(boys[i-1]==girls[j-1] || abs(boys[i-1]-girls[j-1])==1){
						table[i][j]=1+table[i-1][j-1];
					}
					else{
						table[i][j]=max(table[i-1][j],table[i][j-1]);
					}
				}
		}	
	}
	/*
	for printing table->
	for(int i=0;i<=b;i++){
		for(int j=0;j<=g;j++){
		cout<<table[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	return table[b][g];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int b,g,temp;
	cin>>b;
	int boys[b];
	for(int i=0;i<b;i++){
		cin>>temp;
		boys[i]=temp;
	}
	cin>>g;
	int girls[g];
	for(int i=0;i<g;i++){
		cin>>temp;
		girls[i]=temp;
	}
	sort(boys,boys+b);
	sort(girls,girls+g);
	cout<<count(boys,b,girls,g);
	return 0;
}

