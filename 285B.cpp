#include <bits/stdc++.h>
using namespace std;
int main()
{	vector<int> v;
	int n,s,t,temp;
	cin>>n>>s>>t;
	//s is inital positon
	//t is final positon
	//n is total glasses
	
	s=s-1; // converting our index start from 0 instead of 1
	t=t-1;
	for(int i=0;i<n;i++){
		cin>>temp;
		temp=temp-1;
		v.push_back(temp);
	}
	int index,counter;
	counter=0;// to count our steps 
	
	bool visited[n]; // making a visited array to whether we have visited this point so we dont get trapped in infinite loop
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	index=s;
	visited[s]=true;
	while(true){
		if(s==t){
			//if inital is equal to final then no need to go forward
			break;
			
		}
		//else go to next index and mark it true in bool of visited array
		index=v[index];
		visited[index]=true;
		
		if(index==t){
			// if we arrived at desired positon break
			counter++;
			break;
		}
		if(visited[v[index]]==true){
			//if we have already visited the index and still haven't reached
			// we are infinite loop and we can never reach our final positon  
			counter=-1;
			break;
		}
		counter++;
	}
	
	cout<<counter<<endl;
	return 0;
}
