#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string longestRepeatedSubsequence(string s){
	int i,j,n;
	string res = "";
	n = s.length();
	int lrs_arr[n+1][n+1];
	
  //Initialising to 0 at required places in LRS_ARR
  for(i=0; i<=n; i++){
		lrs_arr[i][0] = 0;
		lrs_arr[0][i] = 0;
	}
  
  //Building LRS_ARR using DP
	for(i=1; i<=n; i++){
		for (j=1; j<=n; j++){
			if(s[i-1] == s[j-1] && i!=j){
	                	lrs_arr[i][j] =  lrs_arr[i-1][j-1] + 1;			
			}
          	        else{
		                lrs_arr[i][j] = max(lrs_arr[i][j-1], lrs_arr[i-1][j]);	
			}
		}
	}
  //Printing LRS_ARR contents
	/*for(i=-1;i<=n;i++){
		for(j=-1;j<=n;j++){
			if(i==-1 && j==-1) cout<<"* ";
			else if(i==-1 && j==0) cout<<" ";
			else if(i==-1) cout<<s[j-1]<<" ";
			else if(j==-1 && i==0) cout<<" ";
			else if(j==-1) cout<<s[i-1]<<" ";
			else cout<<lrs_arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
  
  //Formimg the LRS string from LRS_ARR
	i = n;
	j = n;
	while(i>0 && j>0){
        	if(lrs_arr[i][j] == lrs_arr[i-1][j-1]+1){
		        res = res + s[i-1];
		        i--;
		        j--;
        	}
 		else if(lrs_arr[i][j] == lrs_arr[i-1][j]){
            		i--;		
		}
	        else{
			j--;
		}
	}
	reverse(res.begin(), res.end());
	return res;
}
 
int main(){
	string s;
	cin>>s;
	cout << "longest repeating subsequence: "<<longestRepeatedSubsequence(s)<<endl;
    	return 0;
}
