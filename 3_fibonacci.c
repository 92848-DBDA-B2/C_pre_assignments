#include<stdio.h>
int main()
{
    int n;
printf("enter the number");
scanf("%d",&n);

int arr[n];
arr[0]=0;
arr[1]=1;

for (int i = 1; i <n-1; i++)
{
    arr[i+1]=arr[i]+arr[i-1];
}

printf("first %d fibonacci numbers in the sequence\n",n);
for (int i = 0; i < n; i++)
{
    
    printf("%d",arr[i]);
}

    return 0;
}