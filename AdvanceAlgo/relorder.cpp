#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n1, n2;
	cin>>n1;
	int a[n1];
	for(int i=0; i<n1; i++){
		cin>>a[i];
	}
	cin>>n2;
	//rank map b <elem,rank>
	map<int,int> b;
	for(int i=0; i<n2; i++){
		int t;
		cin>>t;
		pair<int,int> p(t,i+1);
		b.insert(p);
	}
	vector< pair<int, int> > ra; //ranked array: array sorted wrt rank in b
	vector<int> rest; //array having elems not in b
	
	int sz_rest = 0;
	for(int i=0; i<n1; i++){
		map<int,int>::iterator it;
		int elem = a[i];
		if((it = b.find(elem))!=b.end()){
			int rank = it->second;
			pair<int,int> p(rank, elem);
			ra.push_back(p);
		}
		else{
			rest.push_back(elem);
			sz_rest++;
		}
	}
	sort(ra.begin(), ra.end());
	sort(rest.begin(), rest.end());
	cout<<endl;
	for(vector< pair<int,int> >::iterator it = ra.begin(); it!=ra.end(); it++){
		cout<<it->second<<" ";
	}
	for(int i = 0; i<sz_rest; i++){
		cout<<rest[i]<<" ";
	}
return 0;
}
