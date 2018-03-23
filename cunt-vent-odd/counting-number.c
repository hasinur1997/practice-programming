#include<stdio.h>
int main(){
	int odd = 0, even = 0, total = 0, i, prime = 0;
	int numbers[] = {10, 15, 25, 63, 7,250, 56, 10, 89};
	
	for(i=0; i<numbers[i]; i++){
		if(numbers[i] % 2 == 0){
			printf("\nEven Number: %d", numbers[i]);
		}else{
			printf("\nOdd Number: %d", numbers[i]);
		}
	} 
	
	total = even + odd;
	
	
	printf("\nTotal Prime Nnumber: %d", prime);
	printf("\nEven Nnumber: %d", even);
	printf("\nOdd Nnumber: %d", odd);
}
