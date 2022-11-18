// 9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter your string:\n");
    fgets(str,100,stdin);
    char Dstr[strlen(str)];
    strcpy(Dstr,str);
    int i,j;
    for(i=0;Dstr[i];i++)
    {
        if((Dstr[i]>=48&&Dstr[i]<=57)||(Dstr[i]>=65&&Dstr[i]<=90)||(Dstr[i]>=97&&Dstr[i]<=122))
         for(j=i+1;Dstr[j];j++)
         {
            if((Dstr[i]>=48&&Dstr[i]<=57)||(Dstr[i]>=65&&Dstr[i]<=90)||(Dstr[i]>=97&&Dstr[i]<=122))
             if(Dstr[i]>Dstr[j])
             {
                char temp = Dstr[i];
                Dstr[i] =Dstr[j];
                Dstr[j]=temp;
             }
         }
    }
    printf("After sorting the string appears like : \n");
    printf("%s\n\n",Dstr);
    getch();
    return 0;
}
   