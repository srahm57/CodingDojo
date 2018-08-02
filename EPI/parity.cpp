#include <iostream>
using namespace std;

int main() {
    unsigned long x;
    int res=0;
    cin>>x;
    while(x){
    //Method 1 Time: 0.2s
    /*     cout<<(x&1)<<endl;
           res^=(x&1);      
           x>>=1;
    */    
           
    //Method 2 Time: 0s
        res^=1;     //saving parity info
        x&=(x-1);   // removes last 1
    
    }
    cout<<res;
	return 0;
}
