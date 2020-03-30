/*
	"Karmanye vadhika raste, Ma phaleshu kadachana
	Ma karma phala he tur bhuh, ma te sangotsva karmanye"

	English Meaning ----> You have a right to “Karma” (actions) but never to any Fruits thereof.
	You should never be motivated by the results of your actions, nor
	should there be any attachment in not doing your prescribed activities.

*/

#include <bits/stdc++.h>
//#include <iostream> if above is slow
using namespace std;
int count(int a,int b){
	if(a==b){
		return 0;
	}
	else if(a>b){
		if((a-b)%2==0){
			return 1;
		}
		else{
			return 2;
		}
	}
	else{
		if((a-b)%2==0){
			return 2;
		}
		else{
			return 1;
		}
	}
}
int main(){
	int a;
	int b;
	int T;
	cin>>T;
	while(T--){
	cin>>a;
	cin>>b;
	cout<<count(a,b)<<endl;
	}



return 0;
}

