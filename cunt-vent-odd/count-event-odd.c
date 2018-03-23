#include<stdio.h>
int is_prime(int number){
	int i;
	if(number == 1){
		return 0;
	}
	
	for( i = 2; i < number; i++){
		if(number % i == 0){
			return 0;
		}
	}
	
	return 1;
}
int main(){
	int odd = 0, even = 0, total = 0, i, prime = 0;
	int numbers[] = {10, 15, 25, 63, 7,250, 56, 10, 89};
	
	for(i=1; i<=10; i++){
		if( is_prime(i) ){
			prime++;
		}  
	} 
	
	total = even + odd;
	
	
	printf("\nTotal Prime Nnumber: %d", prime);
	printf("\nEven Nnumber: %d", even);
	printf("\nOdd Nnumber: %d", odd);
}
