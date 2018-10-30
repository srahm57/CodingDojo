----------------------------------------------------------------TRIED IN C--------------------------------------------------
-------------------Was running correct on local terminal but online compiler gave: Exit code is -1073741819-----------------
#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
    //declare char pointer
		char* str;
    //allocate memory
		str = (char*)malloc(sizeof(char));
    //take as input a sequence of characters, call it, string
		scanf(" %[^\n]s", str);	//space is vvv important
    //find size of string
		int i = 0;
		int size = 0;
		while(str[i]!='\0'){
			size++;
			i++;
		}
    
		if(size>10){
			printf("%c", str[0]);
			printf("%d", size-2);
			printf("%c", str[size-1]);
			printf("\n");
		}
		else{
			printf("%s \n", str);
		}
	}
	return 0;
}

--------------------------------------ACCEPTED SOLUTION IN CPP-------------------------------------------------

#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		if(str.length()>10){
			cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
		}
		else{
			cout<<str<<endl;
		}
	}
return 0;
}
-----------------------------------------SAMPLE I/O----------------------------------------------------

**Input**

4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

**Output**

word
l10n
i18n
p43s
