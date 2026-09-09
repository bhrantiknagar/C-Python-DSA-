// 1. Write a program to insert a string and a sub string, search the substring and replace it with ***


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50], result[200];
    char *pos;

    printf("Enter the string: ");
    gets(str);

    printf("Enter the substring to search: ");
    gets(sub);

    pos = strstr(str, sub);

    if (pos != NULL) {
        int index = pos - str;
        strncpy(result, str, index);
        result[index] = '\0';

        strcat(result, "***");

        strcat(result, pos + strlen(sub));

        printf("String after replacement: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}


