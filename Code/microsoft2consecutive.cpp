#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string out = s.substr(0,2);
	for(int i = 2 ; i < s.size(); i++){
		if(s[i]!=s[i-1] || (s[i] == s[i-1] && s[i] != s[i-2]))
			out +=s[i];
	}
	cout<<out;
}