//Naive implementation
#include <stdio.h>
#include <string.h>
int main(){
    int i,j,k,sz,max,index;
    char s[255];
    int count[255];
    printf("Enter string: ");
    scanf("%s", s);
    sz =0;
    while(s[sz]!='\0'){
        sz++;
    }
    max=0;
    index = -1;
    //printf("\n%d\n", sz);
    for(i=0;i<sz;i++){
        count[i]=0;
        for(j=i+1;j<sz;j++){
            if(s[i]==s[j]){
                count[i]=1;
                for(k=i+1;k<sz&&j<sz;k++){
                    if(s[k]==s[++j]){
                        count[i]=count[i]+1;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        if(count[i]>max){
            max = count[i];
            index = i;
        }
    }
    if(index==-1){
        printf("No substring found\n");
    }
    else{
        for(i=0;i<max;i++){
            printf("%c", s[index+i]);
        }
    }
    printf("\n");
    for(i=0; i<sz; i++){
        printf("%d ", count[i]);
    }
    printf("\nmax size: %d, index: %d", max, index);
return 0;
}
