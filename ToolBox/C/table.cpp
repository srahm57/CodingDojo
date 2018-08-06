#include <iostream>
#include <vector>
#include <string>
using namespace std;
int sz;
vector< vector< string > > table(10, vector<string>(sz));
int insertRow();

int createTable(){
	cout<<"Enter number of columns: ";
	cin>>sz;
	cout<<endl;
	
	cout<<"Enter column names separated by whitespaces: "<<endl;
	int y = insertRow();
	return (1);
}
int insertRow(){
	vector<string> row(sz);
	for(int i=0; i<sz; i++){
		string s;
		cin>>s;
		row.push_back(s);
	}
	//table.insert(table.begin(), row);
	table.push_back(row);
	return 1;
}
void displayTable(){
	cout<<"Here's your table: "<<endl;
	for(vector<vector<string> >::iterator itt = table.begin(); itt!=table.end(); itt++){
		for(vector<string>::iterator it = (*itt).begin(); it != (*itt).end(); it++){
		cout<<*it<<"  ";
		}
		cout<<endl;
	}
}

int main() {
	char want = 'y';

	while(want=='y'){
		cout<<"Enter option: \n1. Create table \t2. Insert a row \n3.Delete a row \t4. Display table"<<endl;
		int ch;
		cin>>ch;
		switch(ch){
		case 1: if(createTable()) cout<<"Successfully created a table"<<endl; break;
		case 2: 
		cout<<"Enter all columns separated by whitespaces: "<<endl;
		if(insertRow()) cout<<"Done!"<<endl; break;
		case 3: 
		case 4: displayTable(); break;
		default: cout<<"Have a good day!"<<endl;
		}
		cout<<"\nDo you want to continue?"<<endl;
		cin>>want;
	}
	return 0;
}
