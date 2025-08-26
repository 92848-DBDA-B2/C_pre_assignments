
//input from user
//compare it with the range
//return the grade
#include<stdio.h>
int main()
{
float marks;
int num;
do
{
    printf("enter the marks out of 90 :\t");
scanf("%f",&marks);

if (marks > 90 || marks<0)
{
    printf("invalid input");
    printf("\nDo you want to continue? yes=1 and No=0");
scanf("%d",&num);
}
else if ( marks>=80 && marks <=90)
{
    printf("Grade: A");
}
else if(marks>=70 && marks<80)
{
    printf("Grade: B");
}
else if(marks>=60 && marks<70)
{
    printf("Grade: C");
}

else if(marks<60)
{
    printf("Grade: F");
}

printf("\nDo you want to continue? yes=1 and No=0");
scanf("%d",&num);
} while (num==1);


    return 0;
}