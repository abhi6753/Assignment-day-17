//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char str[1000];
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i] = str[i]-32;
        }
    }
    printf("Upper case = %s",str);
    getch();
    return 0;
}