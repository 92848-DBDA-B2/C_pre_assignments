#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
char choice;
do{
printf("enter the string=");
scanf("%s",str);

char str2[50];
strlwr(str);
strcpy(str2,str);

//find length of string
int n=0;
while (str[n]!='\0')
{
    n++;
}

//string reversed//
for (int i = 0; i < n; i++)
{
    str2[i]=str[n-i-1];
}
str2[n]='\0';

//string comparing
int is_pal=1;
for (int i = 0; i < n; i++)
{
    if(str2[i]!=str[i])
    {
        is_pal=0;
        break;
    }
    
    
}

if (is_pal)
{
    printf("It is a palindrome\n");
}
else {
        printf("Not a palindrome\n");
    }

    printf("do u want to continue?Y/N");
    scanf(" %c",&choice);
}while (choice=='Y' || choice=='y');


/*if(strcmp(str2,str)==0)
{
    printf("is a palindrome");
}
else
{
    printf("not a palindrome");
}


*/
    return 0;
}