#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

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
			if(votes.at(input)>(sz/2)){
				cout<<"MaxElem is: "<<input<<endl;
				break;
			}
		}
	}
	
return 0;
}
