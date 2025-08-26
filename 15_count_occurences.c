//Input a string from the user. Count occurrences (case insensitive) of 
//each alphabet in the string.
#include<stdio.h>
int main()
{
char str[100];
int count[26]={0};

printf("enter the string");
fgets(str,sizeof(str),stdin);

for (int i = 0; str[i]!='\0'; i++)
{
    char ch=str[i];

    if (ch>='a' && ch<='z')
    {
        ch=ch-32;//convert lowercase to uppercase a-z(97-122) and A_Z(65-90)
    }
    printf("\n%c",ch);

    if(ch>='A' && ch<='Z')
    {
        count[ch-'A']++;//ch=A then 65-65=0 then count[0]
         
    }
    
}
    
    // Print letters with their counts
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;



}