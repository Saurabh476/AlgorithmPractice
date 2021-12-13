#include<bits/stdc++.h>
using namespace std;

int findH(vector<int> &A, int mid){
    int sum = 0;
    for(auto el:A){
        if(el > mid)
        sum += el - mid;
    }
    cout<<sum<<endl;
    return sum;
}
int solving(vector<int> &A, int B) {
    int n = A.size();
    int l = 0,r = *max_element(A.begin(), A.end()), mid = l+(r-l)/2, tl;
    // cout<<B;
    while(l<=r){
    	cout<<l<<" "<<r<<" ";
    	mid = l+(r-l)/2;
        tl = findH(A, mid);
        if(tl == B) return mid;
        if(tl < B) r = mid+1;
        else l = mid-1;
    }
    return mid;
}


void solve(){
	int n,b;
	cin>>n;
	vector<int> A(n);
	for(int i = 0 ; i < n; i++)
		cin>>A[i];
	cin>>b;
	cout<<solving(A,b);
}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
		solve();
}