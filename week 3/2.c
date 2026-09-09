// 2. Write  a program to input 3x3 matrix and print diagonal elements also sum of these elements


#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal elements are: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}


