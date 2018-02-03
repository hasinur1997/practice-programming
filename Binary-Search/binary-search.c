#include<stdio.h>
int main(){
    int i, n, a[500];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the array values: ");
    for( i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }

    printf("The array: ");
    for( i = 0; i < n; i++ ) {
        printf("%d\t", a[i]);
    }

    // Start the process

    int lowest_value = 0, highest_value = n, mid_value, item;
    printf("Enter the searching number: ");
    scanf("%d", &item);

    while( lowest_value <= highest_value ) {
        mid_value = ( lowest_value + highest_value ) / 2;
        if( item == a[mid_value] ){
            break;
        }
        if( item < a[mid_value] ){
            highest_value = mid_value - 1;
        } else{
            lowest_value = mid_value + 1;
        }
    }

    if ( lowest_value > highest_value ) {
        printf("The item is not found !");
    }else{
        printf("The item is found !");
    }

}
