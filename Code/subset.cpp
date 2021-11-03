#include<bits/stdc++.h>
using namespace std;

void subset(vector<vector<int>> &output, vector<int> &nums, int level){
	if(level == nums.size())
		return;

}

int main()
{
	vector<vector<int>> output;
	vector<int> nums = {1,2,3};
	output.push_back(nums);
	subset(&output,&nums,0);
}