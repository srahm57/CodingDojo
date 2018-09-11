#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; //size
	cin>>n;
	int input[n];
	for (int i=0; i<n; i++){
		cin>>input[i];
	}
	int majority = (n/2) + 1;
	int maj_elem = -1;
	map< int, int > hmap;
	for (int i=0; i<n; i++){
		map<int,int>::iterator it;
		if((it = hmap.find(input[i]))!=hmap.end()){
			//input exists
			it->second = it->second + 1;
			if((it->second)>=majority){
				maj_elem = it->first;
			}
		}
		else{
			//insert first time in hmap
			int first = input[i];
			pair<int, int> p(first, 1);
			hmap.insert(p);
		}
	}
	if(maj_elem == -1){
		cout<<"NONE"<<endl;
	}
	else{
		cout<<maj_elem<<endl;
	}
	
	//debug endreturn 0;
return 0;
}
