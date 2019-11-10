#include<stdio.h>
int main()
{
    int shape = 5;
    int large = 19;
    int small = 4;
    int line = 3;
    int i, j, k, l, m, counter = 0;

    for (i = 1; i <= 5; i++) {
        if (i % 2 != 0) {
            for (j = 0; j < line; j++) {
                for (k = 0; k < large; k++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            for (l = 0; l < line; l++) {
                for (m = 0; m < large; m++) {
                    if (counter < 4) {
                        printf("*");
                        counter++;
                    } else {
                        printf(" ");
                    }
                }
                counter = 0;
                printf("\n");
            }
        }
    }
}
