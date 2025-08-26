#include<stdio.h>
#define SIZE 100
int input_matrix(int r,int c,int arr[][c]);
int display(int r,int c,int arr[][c]);
int multiplication(int r1,int c1,int arr[r1][c1],int r2,int c2,int arr2[r2][c2]);
int main()
{
//matrix input
int r1,c1;

printf("\n first matrix :\nenter row");
scanf("%d",&r1);

printf("\nenter col");
scanf("%d",&c1);

int M1[r1][c1];
input_matrix(r1,c1,M1);
display(r1,c1,M1);



int r2,c2;
int m2_r,m2_c;

printf("\n second matrix :\nenter row");
scanf("%d",&r2);

printf("\nenter col");
scanf("%d",&c2);
int M2[r2][c2];

if (c1 != r2)
{
 printf("cannot be multiplied:columns of Matrix 1 must match rows of Matrix 2.");
}
else
{
    input_matrix(r2,c2,M2);
    display(r2,c2,M2);
multiplication(r1,c1,M1,r2,c2,M2);
}





    return 0;
}

int display(int r_size,int c_size,int arr[][c_size])
{

printf("matrix is:\n");
for (int r = 0; r <r_size; r++)
{
    for (int c = 0; c <c_size; c++)
    {
        printf("%d\t",arr[r][c]);
       
    }
    printf("\n");
    
}

}
int input_matrix(int r_size,int c_size,int arr[][c_size])
{
printf("enter the 2*2 matrix\n");
for (int r = 0; r < r_size; r++)
{
    for (int c = 0; c < c_size; c++)
    {
        printf("arr[%d][%d]",r,c);
        scanf("%d",&arr[r][c]);
    }
    
    
}
}


int multiplication(int r1, int c1, int M1[][c1], int r2, int c2, int M2[][c2]) {
    int result[r1][c2];

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            int sum = 0;
            for (int k = 0; k < c1; k++) //columns of Matrix 1 must match rows of Matrix 2.


            {
                sum += M1[i][k] * M2[k][j];
            }
            result[i][j] = sum;
        }
    }

    printf("Matrix Multiplication:\n");
display(r1,c2,result);
return 0;
}
