#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i,maxdp;
    cin>>n;
    vector<int> ap(n);
    for(i=0; i<n; i++)
        cin>>ap[i];
    vector<vector<int>> dp(2, vector<int>(n,1));
    for(int i= 1; i< n; i++){
        maxdp = 1;
        for(int j = i-1; j >= 0 ; j--){
            if(ap[j] > ap[i]){
                maxdp = max(maxdp, dp[0][j] + 1);
            }
        }
        dp[0][i] = maxdp;
        cout<<maxdp<<" ";
    }
    cout<<endl;
    for(int i= 1; i< n; i++){
        if(dp[0][i] == dp[1][i-1]) {
            dp[1][i] = dp[0][i]+1;
        }
        else dp[1][i] = max(dp[0][i], dp[1][i-1]);
        cout<<dp[1][i]<<" ";
    }
    cout<<dp[1][n-1];
}