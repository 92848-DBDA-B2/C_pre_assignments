// to calculate a Factorial of a number.#include<stdio.h>
#include<stdio.h>
int factorial(int n);
int main()
{

int num, factorial=1;
printf("enter a number to find its factorial");
scanf("%d",&num);
if(num>0)
{
while(num!=0)
{

factorial*= num ;
if(num!=1)
{
printf("%d*",num);
}
else
{
    printf("%d",num);
}

num--;


}
printf("=%d",factorial);

}
else
{
    printf("invalid input, enter nonzero positive number");
}

    return 0;
}


