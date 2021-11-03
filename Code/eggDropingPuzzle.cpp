#include<bits/stdc++.h>
using namespace std;

int minFloor(vector<vector<int>> &w, int n , int k){
	if(w[n][k] != -1) return w[n][k];
	if(n == 1) {
		w[n][k] = k;
		return k;
	}
	if(n == 0){
		w[n][k] = INT_MAX;
		return INT_MAX;
	}
	if(k == 1) {
		w[n][k] = 1;
		return 1;
	}
	if(k == 0) {
		w[n][k] = 0;
		return 0;
	}
	
	int i , j,ans,mi = INT_MAX;
	for(i = 1;i<=k;i++){
		ans = max(minFloor(w,n-1,i-1),minFloor(w,n,k-i));
		mi = mi < ans ? mi : ans;
	}
	w[n][k] = mi + 1;
	// cout<<w[n][k]<<endl;
	return w[n][k];
}

int eggDrop(int n, int k) 
{
    // your code here
    // w(e,f) = min(w(e-1,i-1),w(e,f-i))
    // e ==> n, f ==> k
    vector<vector<int>> w(n+1,vector<int>(k+1,-1));
    // cout<<"hello"<<endl;
    return minFloor(w,n,k);
}


int main(){
	int n, k;
	cin>>n>>k;
	cout<<eggDrop(n,k);
	return 0;
}