#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<vector<int>> a(n, vector<int> (n));
	vector<vector<int>> dp(n, vector<int> (n, 0));
	
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n; j++)
			cin>>a[i][j];
	}
	for(int i = n-2 ; i >=0; i--){
		if(a[n-1][i] > a[n-1][i+1]){
			dp[n-1][i] += 1;
		}
	}
	for(int i = n-2 ; i >=0; i--){
		if(a[i][n-1] > a[i+1][n-1]){
			dp[i][n-1] += 1;
		}
	}
	int sum = 0;
	for(int i = n-2 ; i >= 0; i--){
		for(int j = n-2 ; j >=0; j--)
		{
			if(a[i][j] > a[i+1][j])
				dp[i][j] += dp[i+1][j]+1;
			if(a[i][j] > a[i][j+1])
				dp[i][j] += dp[i][j+1]+1;
			sum += dp[i][j];
		}
	}
	cout<<sum<<endl;
}

int main(){
	int t=1;
	cin>>t;
	while(t--)
		solve();
}