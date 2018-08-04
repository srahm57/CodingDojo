#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T--){
	    char a[4];
	    char b[4];
	    int b_arr[3]={0,0,0};
	    int o_arr[3]={0,0,0};
	    int i,j,k;
	    short found = 0;
	    for(i=0; i<4; i++){
	        scanf("%c", &a[i]);
	    }
	    for(i=0; i<4; i++){
	        scanf("%c", &b[i]);
	    }
	    j=0; k=0;
	    for(i=1; i<4; i++){
	        if((a[i]=='b')||(b[i]=='b')){
	            b_arr[j]=i;
	            j++;
	        }
	        if((a[i]=='o')||(b[i]=='o')){
	            o_arr[k]=i;
	            k++;
	        }
	    }
	   i=0;
	    if(b_arr[0]!=0){
	        if(b_arr[1]!=0){
	            if(b_arr[2]!=0){
	                if(o_arr[0]!=0){printf("yes\n");}
	                else {printf("no\n");}
	            }
	            else{
	                //search suitable o
	                i = 6-(b_arr[0]+b_arr[1]);
	                if((o_arr[0]==i)||(o_arr[1]==i)||(o_arr[2]==i)){
	                    printf("yes\n");
	                }
	                else printf("no\n");
	            }
	        }
	        else{
	            printf("no\n");
	        }
	    }
	    else{
	        printf("no\n");
	    }
	    
	    /* for(i=0; i<3; i++){
	        printf("%d", b_arr[i]);  //   print b_arr and o_arr
	    }
	    printf("\n");
	    for(i=0; i<3; i++){
	        printf("%d", o_arr[i]); 
	    }*/
	    
	    /*for(i=1; i<4; i++){
	        printf("%c", a[i]);  //   print a and b
	    }
	    printf("\n");
	    for(i=1; i<4; i++){
	        printf("%c", b[i]);
	    }*/
	   // printf("\nNext\n");
	}
	return 0;
}
