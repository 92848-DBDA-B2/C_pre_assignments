#include<stdio.h>
int main()
{
    printf("enter a string=");
    char str[100];
   // scanf("%s",str);
    fgets(str,sizeof(str),stdin);
/*printf("enter a character");
char ch;
scanf("%c",&ch);*/


int uppercase=0,lowercase=0,digits=0,others=0;
for (int i = 0; str[i]!='\0'; i++)
{
    char ch=str[i];
    if(ch>=65 && ch<=90)
{
    printf("\n%c is uppercase",ch);
    uppercase++;
}
else if (ch >=97 && ch<=122)
{
    printf("\n%c is lowercase",ch);
    lowercase++;
}
else if (ch >= 48 && ch <= 57) 
    {
            printf(" \n%c is digits",ch);
            digits++;
    }
else if(ch!=32 &&ch!=10)//32=space and 10=newline
{
    printf("\n%c is other character ASCI value %d",ch,ch);
    others++;
}



}
printf("\nupper case:%d",uppercase);
printf("\nlower case:%d",lowercase);
printf("\n digits case:%d",digits);
printf("\n others:%d",others);
    return 0;
}