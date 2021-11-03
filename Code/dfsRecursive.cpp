void dfs(int node, vector<int> &parent, vector<vector<int>> &adj, vector<int> &temp, vector<int> &visited){
        visited[node] = 1; // grey colour
        for(int x:adj[node]){
            if(visited[x] == 1 && parent[node] != x){
                // vector<int> temp;
                temp.push_back(node);
                temp.push_back(x);
            }
            if(visited[x] == 0){
                parent[x] = node;
                dfs(x,parent,adj,temp,visited);
            }
        }
        visited[node] = 2; // black colour
    }