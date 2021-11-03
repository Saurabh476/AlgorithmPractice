#include<bits/stdc++.h>
using namespace std;

int expRec(int x, int y){
	if(y == 0) return 1;
	int res = expRec(x, y/2);
	if(y & 1){ // y % 2 == 1 , odd or even checking
		return  x * (res * res);
	}
	else{
		return res*res;
	}
}
int expItr(int x, int y){
	int res = 1;
	int val = x;
	while(y){
		if(y&1){
			res = res * val;
		}
		val = val * val;
		y = y >> 1;
	}
	return res;
}
int mulItr(int x, int y){ // if x, y are very large, we decompose y into binary form
	int res = 0;
	int val = 1;
	while(y){
		if(y&1){
			res = res + x*val;
		}
		val = 2 * val;
		y = y >> 1;
	}
	return res;
}
int main(){
	int x,y;
	cin>>x>>y;

	// cout<<expRec(x,y)<<endl;
	// cout<<expItr(x,y)<<endl;
	// cout<<mulRec(x,y)<<endl;
	cout<<mulItr(x,y)<<endl;
}