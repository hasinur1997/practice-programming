#include<stdio.h>

int main()
{
    int a[100], i, n, k, temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter array element: ");
    for( i=0; i<n; i++ ){
        scanf("%d", &a[i]);
    }

    for( i=0; i<n; i++ ){
        printf("%d\t", a[i]);
    }

    for( i=0; i < n; i++ ){
        for( k = 0; k <= n-i; k++ ){
            if(a[k] > a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    printf("\nSoted value:");
    for( i=0; i<n; i++ ){
        printf("%d\t", a[i]);
    }

    return 0;
}
