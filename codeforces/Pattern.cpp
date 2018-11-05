//412C Pattern. Array of strings. String manipulation
#include <iostream>
#include <strings.h>
#define MAXSIZE 100000
using namespace std;
int main(){
	string s[MAXSIZE];
	string ans = "";
	int num_lines;
	cin>>num_lines;
	
	for(int i=0; i<num_lines; i++){
		cin>>s[i];
	}
	
	int strln = s[0].length();
	short int brk = 0;
	
	for(int i=0; i<strln; i++){
		char prev = s[0][i]; 
		for(int j=1; j<num_lines; j++){
			char a = s[j][i];
			if(a != prev){
				if(prev == '?'){
					prev = a;
				}
				else if(a == '?'){
				}
				else{
					brk = 1;
					break;
				}
			}	
		}
		if(brk) ans+='?';
		else{
			if(prev == '?') ans+='x';
			else ans += prev;
		}
		brk = 0;
	}
	
	cout<<ans;
	
return 0;
}
