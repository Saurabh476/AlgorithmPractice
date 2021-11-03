#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, n;
	cin >> a;
	b = n = a;
	for(int div = 2; div * div <= n; div++){
		if(a%div == 0){
			b = b - b/div;
			while(a%div == 0)
				a = a/div;
		}
	}
	if(a > 1)
		b = b - b/a;
	cout<<b;
}