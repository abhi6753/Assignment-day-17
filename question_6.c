//6. Write a program to reverse a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i;
    int j;
    char temp;
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    j = strlen(str)-2;
    for(i=0;i<strlen(str)-1;i++)
    {
        if(i<j)
        {
            temp = str[i];
            str[i]=str[j];
            str[j]=temp;
            j--;
        }
    }
    printf("After reverse, string is %s",str);
    getch();
    return 0;
}