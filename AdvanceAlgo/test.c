#include <stdio.h>

int findPivot(int *arr) {
	int start = 0, end = 4, mid;
	int last = arr[end];
	mid = start + (end - start) / 2;
	while (start <= end) {
		if (arr[mid] > last) {
			start = mid + 1;
			}
		else if (arr[mid] < last) {
			end = mid - 1;
		} 
		else{
			break;
		}
		mid = start + (end - start) / 2;
	}
	return(mid);
}
int main(){
	int k, i, arr[5];
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		}
	k = findPivot(arr);
	printf("Index of pivot: %d", k-1);
	return 0;
}
