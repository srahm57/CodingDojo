#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> occ_map;
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	cout<<"Enter array elements: "<<endl;
	for(int i=0; i<size;i++){
		int key;
		cin>>key;
		if(occ_map.find(key)==occ_map.end()){
			pair<int,int> P(key,1);
			occ_map.insert(P);
		}
		else{
			occ_map.at(key)+=1;
		}
	}
	for(map<int,int>::iterator it = occ_map.begin(); it!=occ_map.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
return 0;
}
