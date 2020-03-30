//#include <iostream> if above is slow
#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#define pb(x) push_back(x)

const int N=1000;
int n;int x;
vector<int> g[N];
bool used[N];

void read(){
	cin>>n;
	loop(i,1,n){
		cin>>x;
		g[i].pb(x-1);
		g[x-1].pb(i);
	}
}

bool bfs(int u){
	used[u]=true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v=q.front();
		q.pop();
		int count=0;
		for(auto w: g[v]){
			if(!used[w]){
				if(g[w][0]==v && g[w].size()==1){
					count++;
				}
				used[w]=true;
				q.push(w);
			}
		}
		if(count<3 && g[v].size()>1){
			return false;
		}
	}
	
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	read();
	if(bfs(0)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	return 0;
}

