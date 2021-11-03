#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int, map<int, set<int>>> vt;
	vt[0][0].insert(1);
	vt[0][1].insert(2);
	vt[1][2].insert(3);
	vt[1][2].insert(4);
	vt[1][1].insert(5);
	vt[1][1].insert(6);
	vt[-1][1].insert(7);
	vt[-1][1].insert(8);
	vt[-1][2].insert(9);
	vt[-1][2].insert(10);
	vt[2][2].insert(11);
	vt[2][2].insert(12);
/*
	 p represents elements of vt
	 which are actually considered as pair: 
	 pair<int,map<int,set>>> this is a single element of vt
*/
	for(auto p:vt){ // p = pair<int,map<int,set<int>>>
		for(auto q:p.second){ // q = pair<int,set<int>>
			for(auto el:q.second) // el = elment of set
				cout<<el<<" ";
		}
		cout<<endl;
	}

}