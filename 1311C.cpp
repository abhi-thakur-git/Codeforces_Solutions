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
#define loop(i,a,b) for(int i=a;i<=b;i++)
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		int m;
		string s;
		
		cin>>n>>m>>s;
		vector<int> pref(n);
		loop(i,0,m-1){
			int p;
			cin>>p;
			pref[p-1]++;
		}
		for(int i=n-1;i>0;i--){
			pref[i-1]+=pref[i];
		}
		vector<int> ans(26);
		loop(i,0,n-1){
			ans[s[i]-'a']+=pref[i]+1;
		}
		loop(i,0,25){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
return 0;
}

