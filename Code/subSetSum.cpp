bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        bool result = false;
        vector<int> ar;
        ar.push_back(0);
        
        for(int i=0;i<N;i++)
            ar.push_back(arr[i]);
        vector<vector<bool>> dp(ar.size(),vector<bool>(sum+1,false));
        for(int i=0;i<ar.size();i++)
            dp[i][0] = true;
        for(int i=1;i<=sum;i++)
            dp[0][i] = false;
        for(int i=1;i<ar.size();i++){
            for(int j=1;j<=sum;j++){
                if(ar[i]<=j)
                    dp[i][j] = dp[i-1][j-ar[i]] || dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[ar.size()-1][sum];
    }