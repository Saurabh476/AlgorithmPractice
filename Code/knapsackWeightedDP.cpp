#include<bits/stdc++.h>
using namespace std;

int minimumCost(vector<int> &cost,int w) 
{ 
    // Your code goes here
    cost.insert(cost.begin(),0);
    int n = cost.size();
    vector<vector<int>> dp(n,vector<int>(w+1));
    for(int i = 1;i < w+1 ;i++)
    	dp[0][i] = INT_MAX;

    for(int i = 0 ;i < n;i++)
    	dp[i][0] = 0;

    for(int i = 1; i < n; i++){
    	for(int j = 1; j < w+1; j++){
    		if(cost[i] == -1 || i > j){
    			dp[i][j] = dp[i-1][j];
    		}else{
    			if(dp[i][j-i] == INT_MAX){
    				dp[i][j] = dp[i-1][j];
    			}else{
    				dp[i][j] = min(dp[i-1][j] , dp[i][j-i] + cost[i]);
    			}
    			
    		}
    	}
    }
    
    if(dp[n-1][w] == INT_MAX)
    	return -1;
	return dp[n][w];
}


int main(){
	int n, w;
	cin>>n;
	vector<int> cost(n);
	for(int i = 0;i<n;i++)
		cin>>cost[i];
	cin>>w;
	cout<<minimumCost(cost, w);
}