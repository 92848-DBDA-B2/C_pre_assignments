#include<stdio.h>
void table(int arr[10],int n);
void display(int arr[10],int n);
int main()
{
int n;
char choice;
int arr[10];
do{
    printf("enter the number ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("enter non zero positive table");
    }
    else
    {
        table(arr,n);
        display(arr,n);
    }

printf("\n continue? y/n: ");
scanf(" %c",&choice);
}while(choice=='y');


return 0;
}


void display(int arr[10],int n)
{
    printf("table of number%d=",n);
        for (int i = 1; i <=10; i++)
        {
        printf("\n%d",arr[i]);
    
        }
}

void table(int arr[10],int n)
{

for (int i = 1; i <=10; i++)
 {
    arr[i]=n*i;
 }

}