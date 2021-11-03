#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p,q;
	bool flag = false;
	cin>>n;
	cin>>p;
	unordered_set<int> levels;
	// cout<<"HELLOO";
	for(int i = 0 ; i < p; i++){
		cin>>q;
		levels.insert(q);
	}
	// cout<<"HELLOO";
	cin>>p;
	for(int i = 0 ; i < p; i++){
		cin>>q;
		levels.insert(q);
	}
	for(int i = 1; i <= n; i++){
		if(levels.find(i) == levels.end()){
			cout<<"Oh, my keyboard!";
			flag = true;
			break;
		}
	}
	if(!flag) cout<<"I become the guy.";
}