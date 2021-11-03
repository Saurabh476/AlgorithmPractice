#include<bits/stdc++.h>
using namespace std;

void permute(vector<vector<int>> &output,vector<int> &inp,int start, int end){
	int index;
	if(start == end)
		output.push_back(inp);
	else{
		for(index=start;index<=end;index++){
			swap(inp[index],inp[start]);
			permute(output,inp,start+1,end);
			swap(inp[index],inp[start]);
		}
	}
}

int main()
{
	vector<int> input;
	vector<vector<int>> output;
	input = {1,2,3,4,5};
	permute(output, input,0,input.size()-1);
	for(int i=0;i<output.size();i++){
		for(int j=0;j<output[i].size();j++){
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
}