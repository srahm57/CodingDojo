#include <iostream>
#include <string.h>
using namespace std;

int main(){
        string str;
        cin>>str;
        //implicit casts
        if(str[0]>96) str[0] = str[0]-32;
        
        cout<<str;
return 0;
}
