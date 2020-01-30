#include <bits/stdc++.h>
using namespace std;
/*
	max= is our
	f is total 0's - total 1's
	v[i] is num of 0's - num of 1's at that index
*/
bool remainder(int max,int vi,int f){
	// vi is v[i]
	// a function to check whether max=f*n+v[i] for some positive integer n 
	double answer=(double(max)-double(vi))/double(f);
	double answer1=(max-vi)/f;
	if(answer1-answer==0 && answer>0 || answer==0){
		return true;
	}
	else{
		return false;
	}
	return 0;
}
void gen(vector<int>& v,string s){
	//function to generate an array of diff. between num of 0's and 1's at each index
	int x,y;
	x=0;
	y=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			x++;
		}
		else{
			y++;
		}
		v.push_back(x-y);
	}	
}
void pre(int max,vector<int> v){
	int n=v.size();
	int f=v[n-1];
	int counter=0;
	if(f!=0){
		for(int i=0;i<n;i++){
			if(remainder(max,v[i],f)){
				counter++;
			}
		}
	if(max==0){
		// a null prefix is added also
		counter++;
	}
	}
	else{
		for(int i=0;i<n;i++){
			if(max==v[i]){
			// it will occur infinitely	
				counter=-1;
			}
		}
	}
	cout<<counter<<endl;
}
	
int main(){
	int t,siz,max;
	vector<int> v;
	string s;
	cin>>t;
	
	for(int j=0;j<t;j++){
		cin>>siz>>max;
		cin>>s;
		gen(v,s);
		pre(max,v);
		v.clear();
	}
	return 0;
}
