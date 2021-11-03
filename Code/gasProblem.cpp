#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
        int gas = 0, n = A.size(), start = 0,total=0;
        for(int i = 0 ; i < 2*n; i++){
            gas += A[i%n];
            total++;
            if(gas < B[i%n]){
                start = (i+1)%n;
                total = 0;
                gas =  0;
            }
            else gas -= B[i%n];
            if(total == n) break;
        }

        return start;
}

int main()
{
    vector<int> A = {1, 2};
    vector<int> B = {2, 1};
    cout<<canCompleteCircuit;
}