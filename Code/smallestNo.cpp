#include<bits/stdc++.h>
using namespace std;

void print(vector <int > v)
{
	for(int value: v)
		cout<<value<<" ";
	cout<<endl;
}

void smallest(vector <int> v)
{
	int sm1,sm2;
	if(v[0]<v[1]){
		sm1=v[0];
		sm2=v[1];
	}
	else{
		sm1=v[0];
		sm2=v[1];
	}

    for(int i=2;i<v.size();i++){
       	if(v[i]<sm1){
   			sm2=sm1;
   			sm1 = v[i];
   			continue;
       	}
       	else if(v[i]<sm2){
       		sm2 = v[i];
       	}
    }
    cout<<"Smallest 1 : "<<sm1<<endl<<"Smallest 2 : "<<sm2<<endl;
}

int main()
{
	vector<int> v;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	print(v);
	smallest(v);
	
}