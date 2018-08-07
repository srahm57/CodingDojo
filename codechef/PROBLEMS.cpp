#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int P,S;
	int i;
	cin>>P;
    cin>>S;

	i = 1;
	
	vector< pair<int, int> > diff_matrix;
	
	while(i<=P){
	    int valid;
	    vector< pair<int, int> > problem;    //holds pairs (score, numc)
	    vector<int> score;   //scores of subtasks
	    vector<int> numc;    //number of contestants in each subtask
	    for(int j=0; j<S; j++){
	        int temp;
	        cin>>temp;
	        score.push_back(temp);
	    }
	    for(int j=0; j<S; j++){
	        int temp;
	        cin>>temp;
	        numc.push_back(temp);
	    }
	    
	    for (int j=0; j<S; j++){
        problem.push_back(make_pair(score[j],numc[j]));
	    }
	    
	    /*for(int j=0; j<S; j++){     //print pairs of problem vector
	        cout<<problem[j].first<<" "<<problem[j].second<<endl;
	    }
	    */
	    sort(problem.begin(), problem.end());  //sort function in bits/stdc++
	    
	    int prev, curr;
	    valid = 0;
	    prev = problem[0].second;
	    for(int j=1; j<S; j++){
	        curr = problem[j].second;
	       // cout<<"prev: "<<prev<<"curr: "<<curr<<endl;
	        if(curr<prev) valid++;
	        prev = curr;
	    }
        diff_matrix.push_back(make_pair(valid,i));
        
	    i++;
	}
	
	sort(diff_matrix.begin(), diff_matrix.end());  

	/*for(int j=0; j<P; j++){
	    cout<<diff_matrix[j].first<<" "<<diff_matrix[j].second<<endl;
	}*/
	for(int j=0; j<P; j++){
	    cout<<diff_matrix[j].second<<endl;
	}
	
	return 0;
}
