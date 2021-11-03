#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, vector<int> &start, vector<int> &finish, vector<int> &color,
	int node, int &time){
	time  = time + 1;
	start[node] = time;
	color[node] = 1;
	for(auto i: adj[node]){
		if(color[i] == 0) dfs(adj, start, finish, color, i, time);
	}
	time = time + 1;
	finish[node] = time;
	color[node] = 2;
}

bool canFind(vector<int> &start, vector<int> &finish, int D, int X, int Y){
	if(D == 0){
		if(start[X] < start[Y] && finish[X] > finish[Y]) return true;
	}
	else{
		if(start[X] > start[Y] && finish[X] < finish[Y]) return true;
	}
	return false;
}

int main(){
	int N,A,B,Q;
	cin>>N;
	vector<vector<int>> adj(N+1);
	for(int i = 0;i< N-1 ; i++){
		cin>>A;
		cin>>B;
		// cout<<A<<" "<<B<<"-->";
		adj[A].push_back(B);
		adj[B].push_back(A);
	}
	// cout<<"hello";
	// calling DFS to store start, finish, color information of nodes
	vector<int> start(N+1);
	vector<int> finish(N+1);
	vector<int> color(N+1,0);
	int time = 0;
	dfs(adj, start, finish, color, 1, time);
	cin>>Q;
	for(int i = 0; i< Q; i++){
		cin>>N>>A>>B;
		if(canFind(start, finish, N, A, B)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}