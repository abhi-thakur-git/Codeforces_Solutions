/*
	"Karmanye vadhika raste, Ma phaleshu kadachana
	Ma karma phala he tur bhuh, ma te sangotsva karmanye"

	English Meaning ----> You have a right to “Karma” (actions) but never to any Fruits thereof.
	You should never be motivated by the results of your actions, nor
	should there be any attachment in not doing your prescribed activities.

*/
//#include <iostream> if above is slow
#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> a(n);
		loop(i,0,n){
			cin>>a[i];
		}
		vector<int> p(n);
		loop(i,0,m){
			int pos;
			cin>>pos;
			p[pos-1]=1;
		}
		while(true){
			bool ok=false;
			loop(i,0,n){
				if(a[i]>a[i+1] && p[i]==1){
					ok=true;
					swap(a[i],a[i+1]);
				}
			}
			if(!ok){
				break;
			}
		}
		bool ok=true;
		loop(i,0,n-1){
			if(a[i]>a[i+1]){
				ok=false;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

