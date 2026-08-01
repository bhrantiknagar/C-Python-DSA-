// 5. Write a program in C and also in Python to convert lowercase characters to uppercase and vice
// versa in a string



#include <stdio.h>
#include <string.h>

void convertCase(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    convertCase(str);

    printf("Converted string: %s\n", str);

    return 0;
}



