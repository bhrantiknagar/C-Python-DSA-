// 2. Write a C program to swap two numbers using pointers and functions ( Also implement this program in Python)


#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}


