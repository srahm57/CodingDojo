#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *a, int first, int last){
	int pivot,i, j, temp;
	
	j = first-1;

	pivot = a[last];

	for(i=first; i<last; i++){
		if(a[i]<=pivot){
			/*temp = a[j];
			a[j] = a[i];
			a[i] = temp;*/
			j++;//very important: writing this after swap was giving segmentation fault (lesson: it's better to sleep at 4am)
			swap(&a[j], &a[i]);
		}	
	}
	swap(&a[last], &a[j+1]);
	/*temp = a[j+1];
	a[j+1] = a[last];
	a[last] = temp; */
return (j+1);
}

void quicksort(int *a, int first, int last){
	if(first<last){
		int part;
		part = partition(a, first, last);
		quicksort(a, first, part-1);
		quicksort(a, part+1, last);
	}	
}

void searchSum(int *a, int sum, int last){
	int i = 0;
	int j = last;
	while(i<=j){
		if(a[i]+a[j]==sum){
			printf("Yes\n");
			break;
		}
		else if(a[j]>=sum){
			j--;
		}
		else{
			i++;
		}
	}
	if(i>j){
		printf("No\n");
	}
}
int main(){
	int a[10];
	int size, last, first, i, sum;
	printf("Enter size of array to be sorted: ");
	scanf("%d", &size);
	printf("Enter sum to be searched: ");
	
	scanf("%d", &sum);
	   for(i=0; i<size; i++){
		scanf("%d", &a[i]);
	}

	first = 0;
	last = size-1;
	quicksort(a, first, last);

	searchSum(a, sum, last);

	for(i=0; i<size; i++){
		printf("%d ", a[i]);	
	}
return 0;
}
