#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string key, buf;
	cin>>key;
	cin>>buf;
	char ch;
	int i = 0;
	int n = key.size();
	string code = "";
	int shifts[n];
	
	switch(n){
		case 0: cout<<"zero"; break;
		case 3: cout<<"three"<<endl; break;
	}



	for(int i= 0 ; i < key.size(); i++){
		int val = key[i] - 'a';
		shifts[i] = val;
	}
	i = 0;
	for(int j = 0 ; i < buf.size(); j++){
		int val = buf[i] - 'a';
		ch = ((val + shifts[(i++)%n]) % 26 + 'a');
		code += ch;
	}
	cout<<code;
}