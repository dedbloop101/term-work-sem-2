// Q7: Write a program to remove characters from a string except alphabets.//

#include <stdio.h>
#include <string.h>
void main() 
{
    char str[100];
    printf("Input a string: ");
    gets(str);
    int l = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    puts(str);
    return 0;
}
