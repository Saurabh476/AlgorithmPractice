#include<bits/stdc++.h>
using namespace std;


int power(int x, int y, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
	// cout<<x<<" "<<y<<" "<<d;
	if(x <0) x = d + x;
	if(x >=d) x = x%d;
    long long int res=1, val=x;	
	while(y){
		if(y&1){
			res = res * val;
            res %= d;
		}
		val = val * val;
		y = y >> 1;
	}
	return res%d;
}


void solve(){
	cout<<power(-1,1,20);
}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
		solve();
}