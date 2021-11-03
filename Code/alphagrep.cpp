#include<bits/stdc++.h>
#define vb vector<bool> 
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define um unordered_map<int,int>
#define FOR(i,a,b) for(i = (a); i < (b); i++)
using namespace std;


void seive(int n, vi &divi){
	int i,j;
	FOR(i,2,n+1){
		for(int j = i; j< n+1; j+= i){
			divi[j]++;
		}
	}
}

void solve(){
	int n,i,total=0;
	cin>>n;
	vi divi(n+1, 1);
	seive(n+1, divi);
	// for(auto d: divi)
	// 	cout<<d<<" ";
	FOR(i,1,n+1){
		total += i*divi[i];
	}
	cout<<total;
}

int main(){
	int t = 1;
	// cin>>t;
	while(t--){
		solve();
	}

}