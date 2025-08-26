#include<stdio.h>

int main()
{

    char str[10];
    char str2[10];
    printf("enter the string for reversal");
    fgets(str,sizeof(str),stdin);
     
     printf("\n entered string is :%s",str);
int n=0;
    while(str[n]!='\0')
    {
        n++;
    }
printf("N=%d",n);
n=n-1;
    for (int i = 0; i < n; i++)
    {
        str2[i]=str[n-i-1];
    }
    str2[n]='\0';
    printf("\n reversed string is %s :",str2);
    
    while(str2[n]!='\0')
    {
        n++;
    }
printf("\nN2=%d",n);
    return 0;
}
