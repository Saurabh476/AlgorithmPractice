#include<bits/stdc++.h>
using namespace std;


int findHcf(int a, int b){
	if(b == 0) return a;
	return findHcf(b, a%b);
}

void solve(){
	string s, e1, e2, n11, n12, n21, n22;
	cin>>s;
	int n = s.size();
	for(int i = 0 ;  i< n; i++){
		if(s[i] == '+'){
			e1 = s.substr(0, i);
			e2 = s.substr(i+1, n - i);
			break;
		}
	}
	for(int i= 0 ;  i< e1.size(); i++){
		if(e1[i] == '/'){
			n11 = e1.substr(0, i);
			n12 = e1.substr(i+1, e1.size() - i);
		}
	}
	for(int i= 0 ;  i< e2.size(); i++){
		if(e2[i] == '/'){
			n21 = e2.substr(0, i);
			n22 = e2.substr(i+1, e2.size() - i);
		}
	}
	int a = stoi(n11), b = stoi(n12), c = stoi(n21), d = stoi(n22);
	int hcf = findHcf((a*d) + (b*c), b*d);
	a = ((a*d) + (b*c))/hcf;
	b = (b*d)/hcf;
	string st1 = to_string(a) + '/' + to_string(b);
	cout<<st1<<endl;
}


int main(){
	
	int t=1;
	// cin>>t; // test cases
	while(t--){
		solve();
	}
}