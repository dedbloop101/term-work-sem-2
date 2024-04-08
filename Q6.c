//Q6: Write a user define function to find the highest frequency character in a string.//

#include<stdio.h>
#include<string.h>
char frequency(char[]); //function prototype
void main()
{
    char str[256];
    printf("Enter the string :");
    gets(str);
printf("The Highest frequency character that appears in the string is \"%c\"",frequency(str));
}
char frequency(char str[])
{
    int freq[128]={0};
    int i=0;
    while(str[i])
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
        {
            freq[str[i]]++;
        }
        i++;
    }
    int highest=0;
    for(int j=1;j<128;j++)
    {
        if(freq[j]>freq[highest])
        {
            highest=j;
        }
    }
    return highest;
}

