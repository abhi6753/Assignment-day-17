//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter your string:\n");
    fgets(str,1000,stdin);
    strlwr(str);
    char str2[strlen(str)-1];
    int i,j,k,count,key=1;
    for(i=0;i<strlen(str)-1;i++)
    {
        count=1;
        key=1;
        for(j=i+1;j<strlen(str)-1;j++)
        {
            if(str[i]==str[j])
              count++;
        }
        for(k=i-1;k>=0;k--)
        {
            if(str[i]==str[k])
            {
                key=0;
                break;
            }
        }
        if(key==1)
        {
            if(str[i]!=' ')
             printf("'%c' occurs %d times\n",str[i],count);
        }     
    }
getch();
return 0;
}