#include<bits/stdc++.h>
using namespace std;

int countSwaps(vector<int>& nums , int j){
    int target = nums[j-1]%3;
    int ans = -1;
    for(int i = j ; i < nums.size(); i++){
        if(nums[i]%3 == (j-1)%3 && i%3 == nums[j-1]%3){
            return i;
        }
        if((j-1)%3 == nums[i]%3){
            ans = i;
        }
    }
    return ans;
}
int solve(vector<int>& nums){
    int n = nums.size();
    int ans = 0;
    for(int i = 0 ; i < n;i++){
        if(nums[i]%3 != i%3){
            int index = countSwaps(nums,i+1);
            if(index == -1) return -1;
            swap(nums[i],nums[index]);
            ans++;

        }
    }
    return ans;
}
int main(){
    vector<int> nums;
    int n = 3;
    int p;
    for(int i = 0 ; i < n; i++){
        cin>>p;
        nums.push_back(p);
    }

    cout<<solve(nums);


}