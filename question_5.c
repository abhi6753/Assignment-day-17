//5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i;
    printf("Enter string to convert into lowerCase:\n");
    fgets(str,1000,stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i] = str[i]+32;
        }
    }
    printf("Lower case:\n%s",str);
    getch();
    return 0;
}