//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
#include<conio.h>
#define SIZE 2000
int main()
{
    char str[SIZE],i,count=0;
    printf("Enter your string:\n");
    fgets(str,SIZE,stdin);
    while(str[i])
    {
        count++;
        i++;
    }
    printf("Length of string is %d",count-1); // Null element ko remove krne ko 1 minus kiye
    getch();
    return 0;
}