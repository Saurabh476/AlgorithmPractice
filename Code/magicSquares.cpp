#include<bits/stdc++.h>
using namespace std;


// complete this using backtracking algorithm
void back(vector<vector<int>> &mg,int r,int c){
	for(int i=1;i<=9;i++){
		mg[r][c] = i;
		back(mg,r,c)
	}
}
int main(){
	vector<vector<int>> mg(3,vector<int> (3,0));
	back(mg,0,0);
	return 0;
}