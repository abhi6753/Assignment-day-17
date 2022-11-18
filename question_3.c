//3. Write a program to count vowels in a given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,count=0;
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    for(i=0;i<strlen(str);i++)
    if(str[i]=='a'|str[i]=='A'||str[i]=='I'||str[i]=='i'||str[i]=='E'||str[i]=='e'||str[i]=='o'||str[i]=='O'||\
    str[i]=='U'||str[i]=='u')
    {
        count++;
    }
    printf("Total vowel in given string is %d",count);
    getch();
    return 0;
}