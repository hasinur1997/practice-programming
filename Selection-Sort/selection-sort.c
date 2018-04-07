#include<stdio.h>

int main(){
	
	int num[100], n, i, j, temp;
	
	printf("Enter the number of array element: \n");
	scanf("%d", &n);
	
	// Array Element
	printf("Enter array element:\n\n");
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	
	// Before sorted the array
	printf("\n\nUnsorted array: \n\n");
	for(i=0; i<n; i++){
		printf("%d\t", num[i]);
	}
	
	// Insertion sorting process
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(num[i] > num[j]){
				temp 	= num[i];
				num[i] 	= num[j];
				num[j]	= temp;
			}
		}
	}
	
	// The Sorted Array
	printf("\n\nSorted array: \n\n");
	for(i=0; i<n; i++){
		printf("%d\t", num[i]);
	}
}
