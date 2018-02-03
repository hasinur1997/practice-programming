#include<stdio.h>
int main(){
    int i, number, is_prime = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for( i = 2; i < number; i++ ) {
        if( number % i == 0){
            is_prime = 1;
        }
    }

    if( is_prime == 1 ){
        printf("The number is not prime");
    }else{
        printf("The number is prime");
    }

    return 0;
}
