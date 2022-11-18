//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j=0,len,len2;
    char str[1000],str2[1000];
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    len= strlen(str);
    for(i=0;str[i];i++)
    {
        str2[i]=str[i];
    }
    str2[i]='\0';
    printf("After copy:\n%s",str2);
}