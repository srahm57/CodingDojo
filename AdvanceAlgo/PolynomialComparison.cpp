#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	int n, count;
	count = 0;
	srand (time(NULL));

	vector<int> fx;
	vector<int> gx;
	cout<<"enter degree of polynomial"<<endl;
	cin>>n;
	cout<<"enter F(x) values"<<endl;
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		fx.push_back(temp);
	}
	cout<<"enter G(x) coeffs from the highest to lowest degree"<<endl;
	for(int i=0; i<=n; i++){
		int temp;
		cin>>temp;
		gx.push_back(temp);
	}
	int sz;
	sz = 1000*n;
	while(sz--){
		int mod, x;
		mod = 10*n;
		x = rand() %mod;
	//	cout<<x<<endl;
		long long int sumfx;
		sumfx = 1;
		
		for(int i=0; i<n; i++){
			int y;
			y = fx[i];
			//cout<<"fx "<<y;
			sumfx*=(x-y);
		}
	//	cout<<endl;
		long long int sumgx;
		sumgx = 0;
		for(int i=0; i<=n; i++){
			long long int coeff, temp;
			coeff = gx[n-i];
			//cout<<"gx "<<coeff;
			temp = pow(x,i);
			temp = temp*coeff;
			sumgx+=temp;
		}
	//	cout<<endl;
	//out<<sumfx<<" "<<sumgx;
		if(sumfx==sumgx){
			count++;
			cout<<"T";
		}
		else cout<<"F";
	}
	 cout<<count;
	
	
	return 0;
}
