#include <stdio.h>
#include <stdlib.h>
int numinv = 0;

void merge(int* a, int head, int mid, int end){
	int i,j,k;
	int s1 = mid-head+1;
	int s2 = end-mid;
	int L[s1], R[s2];
	for(i=0;i<s1;i++){
		L[i] = a[head + i];
	}
	for(i=0;i<s2;i++){
		R[i] = a[mid+head+j];
	}
	i = j = 0;
	k = head;
	while(i<s1 && j<s2){
		if(L[i]<=R[j]){
			a[k] = L[i];
			i++;
		}
		else{
			a[k] = R[j];
			j++;
			numinv++;
		}
		k++;
	}
	while(i<s1){
		a[k] = L[i];
		k++; i++;
	}
	while(j<s2){
		a[k] = R[j];
		k++; j++;
	}
}
void mergesort(int * a, int head, int end){
	if(head<end){
		int mid = head+end/2;
		mergesort(a, head, mid);
		mergesort(a, mid+1, end);
		merge(a, head, mid, end);
	}
}

int main(){
	int i, n, head, end;
	int* a;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	a = (int *)malloc(n*sizeof(int));
	head = 0;
	end = n-1;
	printf("\nEnter %d elements\n", n);
	for(i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	mergesort(a, head, end);
	printf("%d", numinv);
	return 0;
}
