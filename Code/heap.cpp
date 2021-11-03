#include<bits/stdc++.h>
using namespace std;

// building min-heap
void heapify(vector<int> &v,int index){
	int left = 2*index;
	int right = 2*index +1;
	int len = v.size();
	if(v[left]<v[right]){
		if(v[index]>v[left] && left<len)
		{
			swap(v[index],v[left]);
			heapify(v,left);
		}
	}
	else{
	if(v[index]>v[right] && right < len)
	{
		swap(v[index],v[right]);
		heapify(v,right);
	}}
}


void build_heap(vector<int> &v){

	int len,i;
	len = v.size();
	for(i =len/2;i>=0;i--)
	{
		heapify(v,i);
	}
}
int pop_min(vector<int> &v){
        int min = v[0];
        int len = v.size();
        swap(v[0],v[len-1]);
        v.pop_back();
        heapify(v,0);
        return min;
    }
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int value: v)
		cout<<value<<endl;

	build_heap(v);
	cout<<"After heap"<<endl;

	for(int value: v)
		cout<<value<<endl;

	auto min = pop_min(v);
	
	for(int value: v)
		cout<<value<<endl;
	cout<<"Smallest element :";
	cout<<min<<endl;	
}