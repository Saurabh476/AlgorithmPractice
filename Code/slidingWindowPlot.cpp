#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,n;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i = 0 ; i < n; i++){
		cin>>arr[i];
	}
	int left = 0, right = 0, total = 0;
	total = arr[0];
	int win= INT_MAX;
	while(left<=right && right < n){
		if(total < k){
			total += arr[++right];
		}
		if(total > k){
			total -= arr[left++];
		}
		if(total == k){
			if(win > (right - left + 1)) win = right - left + 1;
			total -= arr[left++];
			total += arr[++right];
			cout<<win<<" ";
		}
	}
	cout<<endl;
	cout<<win;
}