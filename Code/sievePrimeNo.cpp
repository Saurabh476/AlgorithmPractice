#include<bits/stdc++.h>
using namespace std;
#define L 1e5 + 7
int main(){
	vector<bool> prime(L, true);
	vector<int> hp(L,-1);
	unordered_set<int> factors;
	int x,y;
	for(int i = 2; i < L; i++){
		if(prime[i]){
			for(int j = i*i; j < L; j += i){ // el < i already separated in prime/not prime
				prime[j] = false;
				hp[j] = i;
			}
		}
	}
	for(int i = 2; i < L; i++)
		if(prime[i]) cout<<i<<" ";
	// for(int i = 2; i < L; i++){ // display high prime number dividing
	// 	if(hp[i] == -1) hp[i] = i; // making high prime number of primes to itself
	// 	cout<<hp[i]<<" ";
	// }
	// cout<<endl;

	// finding prime factors
	// cin>>y;
	// x = y;
	// while(x>1){
	// 	// cout<<hp[x]<<" ";  // prime factorization
	// 	factors.insert(hp[x]); // only prime factors
	// 	x = x/hp[x];
		
	// }
	// for(auto el : factors)
	// 	cout<<el<<" "; // display prime factors

	// for(int i = 2; i*i <= y ; i++){ 
	// 	if(y%i == 0){
	// 		factors.insert(i); // to find only prime factors
	// 		while(y%i == 0){
	// 			// cout<<i<<" "; // to print prime factorization
	// 			y = y/i;
	// 		}
	// 	}
	// }
	// if(y > 1){ 
	// 	// cout<<y<<" ";
	// 	factors.insert(y);
	// }
	// for(auto el: factors)
	// 	cout<<el<<" "; // printing only prime factors
}