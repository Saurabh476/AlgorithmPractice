#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> &a, int k){
	k = a.size()- k;
	int i = 0 , j = k-1;
	for(i = 0, j = k-1 ; i<j; i++, j--)
		swap(a[i], a[j]);
	for(i = k, j = a.size() - 1; i< j; i++, j--){
		swap(a[i], a[j]);
	}
	for(i = 0, j = a.size()- 1; i<j; i++, j--){
		swap(a[i], a[j]);
	}
}

void solve(){
	int n, k;
	cin>>n>>k;
	if(n < k) k = k%n;
	vector<int> a(n);
	for(int i = 0 ; i<n; i++)
		cin>>a[i];
	rev(a,k);
	for(auto i:a)
		cout<<i<<" ";
	cout<<endl;
}

int main(){
	int t=1;
	cin>>t;
	while(t-- > 0)
		solve();
}