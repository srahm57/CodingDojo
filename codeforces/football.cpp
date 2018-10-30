//Output "No" for atleast 7 consecutive 1's or atleast 7 consec 0's, else output "Yes"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int max = 0;
	int i = 1;
	int ccnt = 1; //consec count **IMP: Cover boundary cases well**
	while(i<=s.length()){
		if(s[i] == s[i-1]) ccnt++;
		else{
			if(ccnt>max) max = ccnt; //remember max consec count seen till now
                               //Alternatively, we could check condition everytime s[i]==s[i-1] and break when ccnt>6
			ccnt = 1;
		}
		i++;
	}
	if(max>6) cout<<"YES";
	else cout<<"NO";
return 0;
}
-------------------------------I/O--------------------------------
Input
001001

Output
NO
