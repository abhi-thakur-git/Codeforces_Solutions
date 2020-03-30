#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int n;
const int N=100000;
vector<int> g[N];
bool used[N];
float level[N];
float sum=0;
float leaf=0;
float prob[N];

void input(){
	int x,y;
	cin>>n;
	loop(i,1,n){
		cin>>x>>y;
		x--;
		y--;
		g[x].push_back(y);
		g[y].push_back(x);
	}	
	return;
}
void bfs(int u){
	used[u]=true;
	queue<int> q;
	q.push(u);
	level[u]=1;
	prob[u]=1;
//	printf("%d\n",u);
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto w:g[v]){
			if(!used[w]){
//				printf("%d\n",w);
				level[w]=level[v]+1;
				if(v==0) prob[w]=prob[v]*1/(g[v].size());			
				else prob[w]=prob[v]*1/(g[v].size()-1);
				used[w]=true;
				q.push(w);
			}
		}
	}
	return;
}


solve(){
	loop(i,0,n){
		if(g[i].size()==1){
			leaf++;
//			cout<<level[i]-1<<" "<<prob[i]<<endl;
			sum=sum+(level[i]-1)*prob[i];
//			cout<<sum<<endl;
		}
	} 
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	input();
	bfs(0);
	solve();
	if(leaf!=0)	cout<<fixed<<setprecision(15)<<sum<<endl;	
	else{
		float l=0;
		cout<<setprecision(15)<<l<<endl;
	}
	return 0;
}

