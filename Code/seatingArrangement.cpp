#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,K,cur,cnt=0,r=1,i=1;
	cin>>N>>M>>K;
	vector<int> nums(N);
	bool looping = false; // looping
	bool allFull = false; // to tell which student can't sit at all
	bool found = false;
	unordered_map<int,int> rows;
	for(int j = 0 ; j < N; j++){
		cin>>cur;
		if(rows[cur]>=K){
			cnt++;
			if(looping) cur = 0;
			if(allFull) break;
			while(rows[cur+i] >= K){
				i++;
				r++;
				if(cur+i == M+1){
					cur = 0;
					i = 1;
					looping = true;
				}

				if(r >= M){
					allFull = true;
					break;
				}
				if(!allFull) rows[cur + i]++;
			}
			
		}
		else rows[cur]++;
	}
	cout<<cnt;
}