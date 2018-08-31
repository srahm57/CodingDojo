#include<stdio.h> 
void main() 
{ 
    int p[3][10]; //,p2[3][10],p3[3][10]; 
    int e,i,j,m1,m2,s, r,num_msgs; 
    printf("\nenter the no of events in p1, p2 & p3\n"); 
    scanf("%d",&e); 

    printf("\nenter the number of msgs to be transmitted\n"); 
    scanf("%d",&num_msgs); 
    
    p[0][0]=0; 
    p[1][0]=0;
    p[2][0]=0;
        
    for(j=0;j<3;j++){
        for(i=1;i<e;i++){
           p[j][i]=p[j][i-1]+1;
        }
    }

    while(num_msgs--){
        printf("Sending msg %d\n...", num_msgs);
        
        printf("\nenter the process which will send msg\n"); 
        scanf("%d",&s); //  1  ,2,3
        s--;
        printf("\nenter the process which will receive msg\n"); 
        scanf("%d",&r);//1,  2  ,3
        r--;
        
        printf("\nenter the event of p%d which will send the msg\n", s+1); 
        scanf("%d",&m1); 
        printf("\nenter the event of p%d which will recieve the msg\n", r+1); 
        scanf("%d",&m2); 
        
        for(i=1;i<e;i++){ 
           if(i==m2){ 
               if(m1 > p[r][i-1]) 
                   p[r][i]=m1+1; 
               else 
                   p[r][i]=p[r][i-1]+1; 
                   //p[s][i]=p[s][i-1]+1; 
                 } 
            else{ 
                
                } 
           }
       }

for(j=0;j<3;j++){
    printf("\nTime stamp for Process %d\n", j+1); 
    for(i=0;i<e;i++){ 
        printf("%d ", p[j][i]); 
    } 
printf("\n"); 
}
} 
