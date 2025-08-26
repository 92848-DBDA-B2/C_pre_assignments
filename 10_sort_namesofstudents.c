#include<stdio.h>
 int main()
 {

char nameofstudents[10][50];
int n;
printf("enter the count:");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("enter the name:");
    scanf("%s",&nameofstudents[i]);
}
printf("entered names are:");
for (int i = 0; i <n; i++)
{
    
    printf("%s\n",nameofstudents[i]);
}

return 0;
 }