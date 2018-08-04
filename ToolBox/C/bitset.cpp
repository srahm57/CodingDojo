#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
#define SZ 12

int main() {
    string s1, s2;
    //take input in string
    cin>>s1;
    cin>>s2;
    //sstream allows us to read from a string as if it were a stream(like cin)
    stringstream sstream1(s1);
    bitset<SZ> b1;
    sstream1>>b1;
    stringstream sstream2(s2);
    bitset<SZ> b2;
    sstream2>>b2;
    
    /*cout<<b1[4]<<endl;
    cout<<b2;*/
    cout<< (b1^b2)<<endl; // | & ^ == != >> << are overloaded for bitset
    cout<< (b1>>4)<<endl;
    
	return 0;
}
