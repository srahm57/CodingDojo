// This solution is partially correct. It gave WA Subtasks 3 & 4. Will improvise before Earth is restored to normal by Avengers (I know that's lame!)

#include <iostream>
using namespace std;

#define MOD 1000000007
typedef long long int ll;

// O(b) modPow. Naive
/*ll modPow(ll a, ll b, ll c){
    long long ans = 1;
    for(int i=0;i<b;i++){
    ans *= a;
    ans %= c; // Because (a*b)%c = ((a%c)*(b%c))%c
    }
    return ans%c;
}*/

// O(log b) modPow. Exponentiation by squaring
ll modPow(ll a,ll b,ll c){
    ll x=1,y=a;
    while(b > 0){
        if(b%2 == 1){
        x=((x%c)*(y%c))%c;
        }
    y = ((y%c)*(y%c))%c; // squaring the base
    b /= 2;
    }
return x%c;
}

ll gcd(ll ft, ll st){
    if(st==0){
        return(ft);
    }
    return gcd(st, ft%st);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll a, b, n, ft, st, ans; //ft => first term
	    cin>>a>>b>>n;
	    
	    if(a<=b){
            st = b-a;
        }
        else{
            st = a-b;
        }
        
        if(st==0){
            ans = modPow(a,n,MOD) + modPow(b,n,MOD);
            ans = ans%MOD;
        }
        else{
            ft = modPow(a,n,st) + modPow(b,n,st);
            ft = ft%st;
        
            ans = gcd(ft, st);
            ans = ans%1000000007;
        }
        
        cout<<ans<<endl;
	}
	return 0;
}
