//59A Word
#include <iostream>
#include <strings.h>
using namespace std;

int main(){
        string input;
//        int change[50];
        cin>>input;
        int i, lc, uc;
        i = lc =uc = 0;
        while(input[i]!='\0'){
                if(input[i]<91) uc++;
                else lc++;
                i++;
        }
        cout<<"lc: "<<lc<<" uc: "<<uc<<endl;
        
        i=0;
        if(uc>lc){
                while(input[i]!='\0'){
                        if(input[i]>91) input[i] = input[i]-32;
                        i++;
                        }
        }
        else{
                while(input[i]!='\0'){
                        if(input[i]<91) input[i] = input[i]+32;
                        i++;
                        }
                }
        cout<<input;
return 0;
}

------------------------The same code gave Runtime error in C----------------*Find the bug*---------------
#include <stdio.h>
#include <malloc.h>
int main(){
        char* input;
        input = (char*)malloc(sizeof(char));
        scanf("%[^\n]s", input);
        
        int i, lc, uc;
        i = lc = uc = 0;
        
        while(input[i]!='\0'){
                if(input[i]<91) uc++;
                else lc++;
                i++;
        }
        i = 0;
        printf("lc: %d uc: %d\n", lc, uc);
        if(uc>lc){
                while(input[i]!='\0'){
                        if(input[i]>91) input[i]=input[i]-32;
                        i++;
                }
        }
        else{
                while(input[i]!='\0'){
                        if(input[i]<91) input[i]=input[i]+32;
                        i++;
                }        
        }
        
        printf("%s", input);
return 0;
}
//Test9: qvxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaiv
