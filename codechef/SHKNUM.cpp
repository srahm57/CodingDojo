#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    long int T;
    cin>>T;
    while(T--){
        //cout<<"Case: "<<T<<endl;
        unsigned long int n, a, y, pwra1, pwrx2, pwry1, pwry2;
        long int dprev, dcurr, ans, r1, r2;
        int i;
        cin>>n;
        a = log2(n);
        pwra1 = pow(2, a);
        
        if(n==1){
            ans = 2;
        }
        else if(pwra1==n){ //boundary case
            ans = 1;
        }
        else{
            dprev = n - (pwra1+pow(2, a-1));
            dprev = abs(dprev);
            for(i=a-2; i>=0; i--){
                dcurr = n-(pwra1+pow(2, i));
                dcurr = abs(dcurr);
                if(dcurr<dprev){
                    dprev = dcurr;
                }
                else{
                    break;
                }
            }
            dcurr = n - (pow(2, a+1)+1);
            dcurr = abs(dcurr);
            if(dprev<dcurr){
                ans = dprev;
            }
            else{
                ans = dcurr;
            }
            
        }
       cout<<ans<<endl;
       //cout<<endl;
    }
	return 0;
}
