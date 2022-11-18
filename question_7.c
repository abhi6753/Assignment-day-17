//7. Write a program in C to count the total number of alphabets, digits and special\
characters in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i, alphaCount=0,digitCount=0,Sepecial_Count=0;
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    for(i=0;i<strlen(str)-1;i++)
    {
       if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
          alphaCount++;
       else if(str[i]>=48 && str[i]<=57)
          digitCount++;
       else
          if(str[i]!=32) // not count whitespaces
          Sepecial_Count++;
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial Character = %d",alphaCount,digitCount,Sepecial_Count);
    getch();
    return 0;
}