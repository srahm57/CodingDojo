#include <stdio.h>
void swap(int* a, int* b){
  int t;
   t = *b;
  *b = *a;
  *a = t;
}
int partition(int* a, int f, int l){
  int pivot = a[l];
  int i,j;
  j = f-1;
  for(i=f;i<l;i++){
    if(a[i]<=pivot){
      j++;
      swap(a+i,a+j);
    }
  }
  swap(a+j+1, a+l);
  return j+1;
}
void quicksort(int *a, int f, int l){
  if(f<l){
    int part = partition(a, f, l);
    quicksort(a, f, part-1);
    quicksort(a, part+1, l);
  }
}
int main(){
  int i, n, count;
  int a[n];
  count = 1;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  quicksort(a,0,n-1);
  // printf("Done!");
  for(i=1; i<n; i++){
    // printf("%d ", a[i]);
    if(a[i]!=a[i-1]){
      printf("%d: %d ", a[i-1], count);
      count = 1;
    }
    else{
      count++;
    }
  }
  printf("%d: %d ", a[i-1], count);

  return 0;
}
