// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  //vector<int> visited;
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V);
        stack<pair<int,int>> st;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                st.push({i,-1});
                visited[i] = 1;
                while(!st.empty()){
                    auto curr_node = st.top();
                    st.pop();
                    // visited[curr_node] = 1;
                    for(int m : adj[curr_node.first]){
                        if(visited[m] && m != curr_node.second && curr_node.second != -1)
                            return 1;
                        else if(!visited[m])
                        {
                            st.push({m,curr_node.first});
                            visited[m]=1;
                        }
                    }
                }
            }
        }
        
        return 0;
    }
};
