#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited,
	int i, int j, vector<int> &dir, int &cnt){
	int n = grid.size();
	visited[i][j] = true;
	cnt++;
	for(auto el: dir){
		if((i+el) >= 0 && (i+el) < n && grid[i+el][j] == 1 && !visited[i+el][j])
			dfs(grid, visited, i+el, j, dir, cnt);
	}
	for(auto el: dir){
		if((j+el) >=0 && (j+el) < n && grid[i][j+el] == 1 && !visited[i][j+el])
			dfs(grid, visited, i, j+el, dir, cnt);
	}

}

void display(vector<vector<int>> &grid){
	int n = grid.size();
	for(int i = 0 ; i< n; i++){
		for(int j = 0 ; j < n; j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}
void solve(){
	int n, q, cnt = 0;
	cin>>n;
	vector<vector<int>> grid(n, vector<int> (n));
	vector<vector<bool>> visited(n, vector<bool> (n, false));
	vector<int> dir = {-1, 1};
	for(int i = 0 ; i< n; i++){
		for(int j = 0 ; j < n; j++){
			cin>>grid[i][j];
		}
	}
	// display(grid);
	cin>>q;
	vector<int> queries(q);
	for(int i = 0 ; i < n; i++)
		cin>>queries[i];
	unordered_map<int,int> s;
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n; j++){
			if(grid[i][j] == 1 && visited[i][j] == false){
				dfs(grid, visited, i, j, dir, cnt);
				s[cnt]++;
				cnt = 0;
			}
		}
	}
	for(int i = 0 ; i < q; i++){
		if(s.find(queries[i]) == s.end()) cout<<0;
		else cout<<s[queries[i]];
		cout<<" ";
	} 
}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
		solve();
}