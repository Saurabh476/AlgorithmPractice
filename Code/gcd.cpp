#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
	if(y == 0) return x;
	// if(x%y == 0) return y; // both are correct
	return gcd(y,x%y);
}
int main(){
	cout<<gcd(12,12);
}