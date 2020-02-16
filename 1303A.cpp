#include <bits/stdc++.h>
//#include <iostream> if above is slow
using namespace std;
int num(string s){
	int n=s.size();
	int _start;
	int _end;
	bool flag=false;
	for(int i=0;i<n;i++){
		//first
		if(s[i]=='1'){
			_start=i;
			flag=true;
			break;
		}
	}
	if(flag==false){
		return 0;
	}
	for(int i=n-1;i>=0;i--){
		//first
		if(s[i]=='1'){
			_end=i;
			break;
		}
	}
//	cout<<_start<<"            "<<_end<<endl;
	int counter=0;
	for(int i=_start;i<=_end;i++){
		if(s[i]=='0'){
			counter++;
		}
	}
	return counter;
}
int main(){
	int T;
	cin>>T;
	string s;
	while(T--){
		cin.ignore();
		cin>>s;
		cout<<num(s)<<endl;
	}
return 0;
}

