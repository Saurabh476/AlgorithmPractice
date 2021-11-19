#include<bits/stdc++.h>
using namespace std;

void toggle (string &s, int i){
	if(s[i] == '0') s[i] = '1';
	else s[i] = '0';
}

string find(int n){
	string out = "";
	while(n){
		if(n&1){
			// cout<<1;
			out.push_back('1');
		}
		else{
			out.push_back('0');
			// cout<<0;
		}
		n = n >> 1;
	}
	// cout<<out<<endl;
	reverse(out.begin(), out.end());
	return out;
}
bool possible(string s, int i){
	int n = s.size();
	if(i == n-1 )return true;
	if(s[i+1] == '0') return false;
	for(int j = i+2; j < n; j++)
		if(s[j] == '1') return false;
	return true;
}
void solve(){
	int n;
	cin>>n;
	string s = find(n);
	n = s.size();
	unordered_map<string, int> hash;
	queue<pair<string, int>> q;
	q.push({s, 0});
	hash[s] = 1;
	while(!q.empty()){
		auto node = q.front();
		// cout<<node.first<<endl;
		if(stoi(node.first) == 0) {cout<<node.second; break;}
		q.pop();
		s = node.first;
		cout<<s<<"---->";
		for(int i = 0 ; i < n; i++){
			toggle(s, i);
			if(hash.find(s) == hash.end() && possible(node.first, i)){
				cout<<s<<" ";
				q.push({s, node.second+1});
				hash[s] = 1;
			}
			toggle(s,i);
		}
			cout<<endl;
	}
}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
		solve();
}