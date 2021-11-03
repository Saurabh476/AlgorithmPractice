#include<bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>& arr,int a, int b)
{
    int i = -1,n = arr.size();
    // arr[i] < = a, swap(arr[i+1],arr[j])
    for(int j = 0;j<n;j++){
        if(arr[j]< a){
            swap(arr[i+1],arr[j]);
            i++;
        }
    }
    for(int i = 0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
    for(int j = 0;j<n;j++){
        if(arr[j]>= a && arr[j]<=b){
            swap(arr[i+1],arr[j]);
            i++;
        }
    }
    // for(int j = 0;j<n;j++){
    //     if(arr[j] >= b){
    //         swap(arr[i-1],arr[j]);
    //         i--;
    //     }
    // }
}

int main(){
	int n,val,a,b;
	cin>>n;
	vector<int> aar(n);
	for(int i = 0;i<n;i++){
		cin>>aar[i];
	}
	cin>>a>>b;
	threeWayPartition(aar,a,b);
	for(int i = 0;i<n;i++)
		cout<<aar[i]<<" ";
	cout<<endl;
	cout<<a<<" "<<b;
}

