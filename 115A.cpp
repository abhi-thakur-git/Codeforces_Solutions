//#include <iostream> if above is slow
#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int max_level(vector<int> G[],int v,int x){
	int level[v];
	bool marked[v];
	memset(level,0,sizeof(level));
	memset(marked,0,sizeof(marked));
	
	queue<int> q;
	
	q.push(x);
	
	level[x]=0;
	marked[x]=true;
	
	while(!q.empty()){
		x=q.front();
		q.pop();
		loop(i,0,G[x].size()){
			int b=G[x][i];
			if(!marked[b]){
				q.push(b);
				level[b]=level[x]+1;
				marked[b]=true;
			}
		}
	}
	return *max_element(level,level+v);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,temp;
	cin>>n;
	vector<int> G[n];
	loop(i,0,n){
		cin>>temp;
		if(temp!=-1){
			temp=temp-1;
			G[temp].push_back(i);
		}
	}
	int max=-1;
	loop(i,0,n){
		if(max<max_level(G,n,i)){
			max=max_level(G,n,i);
		}
	}
	cout<<max+1<<endl;
	return 0;
}

