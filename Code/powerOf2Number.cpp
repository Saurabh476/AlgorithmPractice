#include<bits/stdc++.h>
using namespace std;

int solve(){
	int A;
	cin>>A;
	// cout<<A;
	if(A == 1) return 1;
    vector<bool> prime(1e2, true);
    for(int i = 4 ; i < 1e2; i+=2){
        prime[i] = false;
    }
    for(int i = 3; i < 1e2; i+=2){
        if(prime[i]){
            for(int j = i+i; j< 1e2; j+=2){
                prime[j] = false;
            }
        }
    }
    if(A%2 == 0){
        int cnt = 0;
        while(A%2==0){
            A = A/2;
            cnt++;
        }
        if(A == 1 && cnt > 1) return 1;
        else return 0;
    }
    else{
        for(int i=3; i< 1e2; i+=2){
            if(prime[i] && A%i == 0){
                int cnt = 0;
                while(A%i == 0){
                    A=A/i;
                    cnt++;
                }
                if(A == 1 && cnt>1) return 1;
                return 0;
            }
        }
    }
    return 0;

}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
		cout<<solve();
}