// Summation of Array element

#include<stdio.h>
int main(){
	int  i, n, a[100], sum = 0;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	printf("Enter array element: ");
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<=n; i++){
		sum = sum + a[i];
	}
	
	printf("The Result: %d", sum);
}
