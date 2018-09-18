#include <stdio.h>
#include <stdlib.h>

int merge(int* a, int head, int mid, int end){
	int numinv = 0;
	int i,j,k;
	int s1 = mid-head+1;
	int s2 = end-mid;
	int L[s1], R[s2];
	for(i=0;i<s1;i++){
		L[i] = a[head + i];
	}
	for(i=0;i<s2;i++){
		R[i] = a[mid+i+1]; //important
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
			numinv = numinv + (s2-i);	//count all from i to end of L arr
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
return (numinv);
}
int mergesort(int* a, int head, int end){
	if(head<end){
		int mid = head+(end-head)/2;
		int inv1 = mergesort(a, head, mid);
		int inv2 = mergesort(a, mid+1, end);
		int tot_inv = inv1 + inv2+ merge(a, head, mid, end);
		return  (tot_inv);
	}
	else return(0);
}

int main(){
	int i, n, head, end;
	//int* a;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int a[n];
	//a = (int *)malloc(n*sizeof(int));
	head = 0;
	end = n-1;
	printf("\nEnter %d elements\n", n);
	for(i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int countinv = mergesort(a, head, end);
	printf("%d", countinv);
	return 0;
}
