//Assignment 3. Q2. Unordered maps and find max
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

int findMax(unordered_map<int,int> V){
	int temp=0;
	int mayor;
	for(auto it = V.begin(); it!=V.end(); it++){
		if(it->second > temp){
			temp = it->second;
			mayor = it->first;
		}
	}
	return (mayor);
}
int main() {
	int sz;
	unordered_map <int, int> votes;
	cout<<"Enter array size"<<endl;
	cin>>sz;
	cout<<"Enter %d elements"<<sz<<endl;
	for(int i=0; i<sz; i++){
		int input;
		cin>>input;
		if(votes.find(input)==votes.end()){
			pair<int, int> P(input, 1);
			votes.insert(P);
		}
		else{
			votes.at(input) += 1;
		}
	}
	
	for(auto it = votes.begin(); it!=votes.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	cout<<"Mayor is: "<<findMax(votes);
	return 0;
}
