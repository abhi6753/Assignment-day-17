//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define LIMIT 1000
int main()
{
    char str[LIMIT];
    int i,count=0;
    char ch;
    printf("Enter your string:\n");
    fgets(str,LIMIT,stdin);
    int length = strlen(str);
    printf("Enter your character:\n");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++)
    {   
        if(ch==str[i]||ch==str[i]-32)
        {
            count++;
        }
    }
    printf("%c occurs %d times",ch,count);
    getch();
    return 0;
    
}