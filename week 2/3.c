// 3. Write a C program to read 10 numbers in an array and create a function to printb all the numbers from array and also to display only even and odd numbers


#include <stdio.h>

void printArray(int arr[], int size)
{
    int i;

    printf("\nAll Numbers:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printEven(int arr[], int size)
{
    int i;

    printf("\nEven Numbers:\n");
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void printOdd(int arr[], int size)
{
    int i;

    printf("\nOdd Numbers:\n");
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, 10);
    printEven(arr, 10);
    printOdd(arr, 10);

    return 0;
}



