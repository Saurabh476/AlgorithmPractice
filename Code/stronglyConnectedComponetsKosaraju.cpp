#include<bits/stdc++.h>
using namespace std;

    void dfs(int V, vector<int> adj[], priority_queue<pair<int, int>> &finish ,vector<int> &color,	int node, int &t){
    	t = t + 1;
    	color[node] = 1;
    	for(auto i: adj[node]){
    		if(color[i] == 0) {
    			dfs(V, adj, finish, color, i, t);
    		}
    	}
    	t = t + 1;
    	finish.push({t, node});
    	color[node] = 2;
    }
    void graphT(int V, vector<int> adj[], vector<int> adj2[]){
    	for(int i = 0; i< V; i++){
    		for(auto node: adj[i]){
    			adj2[node].push_back(i);
    		}
    	}
    }
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
    	priority_queue<pair<int, int>> finish, finish2;
    	vector<int> color(V,0);
    	int t = 0;
    	dfs(V, adj, finish, color, 0, t);
    	vector<int> adj2[V];
    	graphT(V, adj, adj2);
    	int count = 1;
    	t = 0;
    	color.clear();
    	while(finish.size() > 0){
    		auto node = finish.top();
    		finish.pop();
    		if(color[node.second] == 0){
    			t = 0;
    			count++;
    			dfs(V, adj2, finish2, color, node.second, t);
    		}
    	}
    	return count;
    }

int main(){
	int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	cout << kosaraju(V, adj) << "\n";
    }

    return 0;

}