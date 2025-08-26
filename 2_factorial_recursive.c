// to calculate a Factorial of a number.#include<stdio.h>
#include<stdio.h>
int factorial(int n);
int main()
{

int num;

printf("enter a number to find its factorial");
scanf("%d",&num);
int result= factorial(num);
if(result==1)
{
    printf("invalid input,please enter non zero positive number");
}
else
{
    printf(":%d",result);
}

    return 0;
}


int factorial(int n)
{
    if(n==0 || n<0)
    return 1;
    printf("%d *",n);
    int result= n * factorial(n-1);
    
    return result;

}