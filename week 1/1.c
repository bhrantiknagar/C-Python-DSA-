// Perform the following functions on string (Character array):-
// - left (string,n)
// - right (string,n)
// - mid(string,position,n)
// - pal(string1,string2)


#include <stdio.h>
#include <string.h>

void left(char str[], int n)
{
    int i;

    printf("Left %d characters: ", n);

    for (i = 0; i < n && str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

void right(char str[], int n)
{
    int length, start, i;

    length = strlen(str);

    if (n > length)
        start = 0;
    else
        start = length - n;

    printf("Right %d characters: ", n);

    for (i = start; i < length; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

void mid(char str[], int position, int n)
{
    int i;

    printf("Middle characters: ");

    position--; // Convert user input (1-based) to array index (0-based)

    for (i = position; i < position + n && str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

void pal(char str1[], char str2[])
{
    if (strcmp(str1, str2) == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Both strings are not equal.\n");
    }
}

int main()
{
    char str[100], str1[100], str2[100];
    int n, position;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter value of n: ");
    scanf("%d", &n);

    left(str, n);
    right(str, n);

    printf("\nEnter starting position for mid: ");
    scanf("%d", &position);

    if (position < 1 || position > strlen(str))
    {
        printf("Invalid position.\n");
        return 0;
    }

    mid(str, position, n);

    printf("\nEnter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    pal(str1, str2);

    return 0;
}


