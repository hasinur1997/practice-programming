#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array element: ");

    for( i = 0; i<n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("The array: ");

    for( i = 0; i<n; i++ ){
        printf("%d\t", a[i]);
    }

    return 0;
}
