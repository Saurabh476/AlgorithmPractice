#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string out = s.substr(0,2);
	int cur = INT_MIN, l = 0, r = 2;
	for(l ; l < r && r < s.size();){
		if(s[r] != s[r-1] || s[r]!=s[r-2])
			r++;
		else{
			if(cur < r - l){
				cur = r - l;
				out = s.substr(l , r - l);
				// cout<<l<<" "<<r<<out<<"\n";
			}
			l = r-1;
			r++;
		}
	}
	cout<<out;
}