#include<stdio.h>

int main(){
    int i, n, a[500], k, item;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter array element: ");
    for(i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 1; i <= n; i++){
        printf("%d\t", a[i]);
    }
    printf("\nEnter the position: ");
    scanf("%d", &k);

    printf("\nEnter the item: ");
    scanf("%d", &item);

    i = n;
    n = n+1;
    while( i >= k ){
        a[i+1] = a[i];
        i = i-1;
    }

    a[k] = item;

    printf("New array: ");

    for(i = 1; i <= n; i++){
        printf("%d\t", a[i]);
    }

}
