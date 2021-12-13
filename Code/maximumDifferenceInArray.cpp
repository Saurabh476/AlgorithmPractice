// Mathworks Question
// Q: Give array "a". Find maximum difference a[j]-a[i] & i<j & a[i]<a[j]

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int msf = a[0], md = INT_MIN;
	for(int i= 1 ; i < n; i++){
		if((a[i] > msf) && (a[i] - msf) > md) md = a[i] - msf;
		msf = min(a[i], msf);
	}
	cout<<md;
}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
		solve();
}