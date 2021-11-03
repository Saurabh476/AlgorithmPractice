	
#include<bits/stdc++.h>
using namespace std;
int minDifference(int arr[], int n)  { 
    // Your code goes here
    int value,flag=0;
    vector<int> ar;
    ar.push_back(0);
    
    for(int i=0;i<n;i++)
        ar.push_back(arr[i]);
    int sum = accumulate(ar.begin(),ar.end(),0);
    sum = sum/2;
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
    
    for(int i=ar.size()-1 ; i>=0 && flag==0;i--){
            for(int j=sum;j>=0;j--)
                if(dp[i][j]){
                    value = j;
                    flag = 1;
                    break;
                }
        }
        return sum1-value;
}

int main(){
    int arr[] = {1,6,11,5};
    int N = 4;

    cout<<minDifference(arr,N);
}