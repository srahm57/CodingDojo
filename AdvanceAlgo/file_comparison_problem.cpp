#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int SZ = 16;

int power(int x, unsigned int y, int p)
{
    int res = 1;     
    x = x % p; 
               
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
 
bool miillerTest(int d, int n)
{
    int a = 2 + rand() % (n - 4);
 
    int x = power(a, d, n);
 
    if (x == 1  || x == n-1)
       return true;
 
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
 
    return false;
}
 

bool isPrime(int n, int k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
 
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
    for (int i = 0; i < k; i++)
         if (miillerTest(d, n) == false)
              return false;
 
    return true;
}

int main() {
	unsigned int m, n;
	cin>>m;
	cin>>n;
	int sz;
	srand (time(NULL));
	sz = log2(m)+1;
	sz = sz*sz;
	int p = rand() %sz;
	bool pnp = isPrime(p, 5);
	while(!pnp){
		srand (time(NULL));
		p = rand() %sz;
		pnp = isPrime(p, 5); //using Miller Rabin primality test
	}
	cout<<p<<endl;
	int r1, r2;
	r1 = m%p;
	r2 = n%p;
	if(r1==r2){
		cout<<"May/may not be same"<<endl;
	}
	else{
		cout<<"Not same"<<endl;
	}
	
return 0;
}
