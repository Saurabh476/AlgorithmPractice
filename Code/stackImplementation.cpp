#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp;
	stack<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push(temp);
	}
	while(v.top()){
		cout<<v.top()<<endl;
	}
}