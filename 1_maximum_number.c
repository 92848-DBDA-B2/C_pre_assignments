//input n number
//calculate maximum of them
#include<stdio.h>
void input(int arr[],int size);
void display(int arr[],int size);
void find_max(int arr[],int size);

int main()
{
int size,i;
//size 
printf("enter the size");
scanf("%d",&size);


int arr[size];
input(arr,size);
display(arr,size);
find_max(arr,size);

    return 0;
}

//input
void input(int arr[],int size)
{
int i;
printf("\n enter the numbers:\n");
for(i=0;i<size;i++)
{
    printf("number %d:",i+1);
    scanf("%d",&arr[i]);
}
//display
}
void display(int arr[],int size)
{
    int i;
printf("\nyou entered:");
for ( i=0; i < size; i++)
{
    printf("\t%d",arr[i]);
}

}

//find_max
void find_max(int arr[],int size)
{
int i, max=arr[0];
for(int i=1;i<size;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }

}
printf("\nmaximum number amongst the input :%d",max);
}