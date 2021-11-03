#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int,int> count;
	vector<int> nums = {1,2,3,4,3,2,1};
	for(int i=0;i<nums.size();i++){
		count[nums[i]] = count[nums[i]] == 0? 1:count[nums[i]]+1; 
	}
	for(auto it = count.begin();it != count.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	cout<<count.size();
}