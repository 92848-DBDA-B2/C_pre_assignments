#include<stdio.h>
#define SIZE 2
int input_matrix(int arr[][SIZE]);
int display(int arr[][SIZE]);
int multiplication(int arr[SIZE][SIZE],int arr2[SIZE][SIZE]);
int main()
{
//matrix input
int r,c;
int M1[SIZE][SIZE];
int M2[SIZE][SIZE];
input_matrix(M1);
input_matrix(M2);
display(M1);
display(M2);

multiplication(M1,M2);


    return 0;
}

int display(int arr[SIZE][SIZE])
{

printf("matrix is:\n");
for (int r = 0; r < SIZE; r++)
{
    for (int c = 0; c < SIZE; c++)
    {
        printf("%d\t",arr[r][c]);
       
    }
    printf("\n");
    
}

}
int input_matrix(int arr[2][2])
{
printf("enter the 2*2 matrix\n");
for (int r = 0; r < SIZE; r++)
{
    for (int c = 0; c < SIZE; c++)
    {
        printf("arr[%d][%d]",r,c);
        scanf("%d",&arr[r][c]);
    }
    
    
}
}

int multiplication(int M1[SIZE][SIZE],int M2[SIZE][SIZE])
{
int result[SIZE][SIZE];
int sum=0;
// multiplication hint: 1: same row + changing column(0 to size-1)
//M2 same column but changing row (0 to size-1)
//result[i][j]= sum of(m1[r][k] + M2[k][c]) why k: bcoz k is moving from 0 to size-1 for each r and c
for ( int r = 0; r < SIZE; r++)
{
 for (int c = 0; c < SIZE; c++)
 {
     for (int k = 0; k <SIZE; k++)
     {
      sum = sum +(M1[r][k]*M2[k][c]);
      
     }
     result[r][c]=sum; 
    sum=0;// reste sum variable
 }
 
}

printf("matrix multipication: \n");
display(result);

}


