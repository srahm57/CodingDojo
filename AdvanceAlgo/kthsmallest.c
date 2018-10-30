#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>

int main(){
        int n,i;
        printf("Size of array:");
        scanf("%d", &n);
        
        printf("Enter array elements:");
        int arr[n];
        for(i=0; i<n; i++)
                scanf("%d", &arr[i]);
        
        printf("Enter k:");
        int k;
        scanf("%d", &k);
        
        srand((unsigned int)time(0));
        int smaller = 0;
        int x;
        int count = 0;
        while(k!=smaller+1){
                x = rand()%n;
                //arr[x]
                smaller = 0;
                for(i=0; i<n; i++){
                        if(arr[i]<arr[x]) smaller++;
                }
                count++;
         }
        
        printf("Count: %d \n", count);
        if(k==smaller+1){
                printf("Ans: %d \n", arr[x]);
        }
        
        
return 0;
}
