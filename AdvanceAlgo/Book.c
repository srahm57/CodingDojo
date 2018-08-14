#include <iostream>
#include <strings.h>
using namespace std;

struct Book{
	string name;
	string author_name;
	string publication;
	int edition;
	int isbn_no;
	float price;
	int publication_year;
};

int main() {
	struct Book b[2];
	char ch = 'y';
	int i=0;
	while(ch == 121){
		cout<<"Enter Book name: ";
		cin>>b[i].name;
		cout<<endl;

		cout<<"Enter Author name: ";
		cin>>b[i].author_name;
		cout<<endl;

		cout<<"Enter Publication: ";
		cin>> b[i].publication;
		cout<<endl;

		cout<<"Enter Edition: ";
		cin>>b[i].edition;
		cout<<endl;

		cout<<"Enter ISBN no: ";
		cin>>b[i].isbn_no;
		cout<<endl;

		cout<<"Enter Price: ";
		cin>>b[i].price;
		cout<<endl;

		cout<<"Enter publication year: ";
		cin>>b[i].publication_year;
		cout<<endl;
		
		cout<<"Continue? (y/n): ";
		cin>> ch;
		i++;
	}
	
	for(int i=0; i<2; i++){
		cout<<"Name: "<<b[i].name<<endl;
		cout<<"Author name: "<<b[i].author_name;
		cout<<"Publication: "<<b[i].publication;
		cout<<"Edition: " << b[i].edition;
		cout<<"ISBN no: "<<b[i].isbn_no;
		cout<<"Enter Price: "<<b[i].price;
		cout<<"Enter publication year: "<<24publication_year;
	}

	return 0;
}
