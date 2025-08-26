#include<stdio.h>
void Binary(int n);
void Octa(int n);
void Hexa(int n);
 int main()
 {

int n;//1100



printf("enter the decimal number:");
scanf("%d",&n);

Binary(n);
Octa(n);
Hexa(n);
     return 0;
 }
 void Binary(int n)
 {


    int N=n;
    int r[32]={0};
    int i;
        for (i = 0; n>0; i++)    
        {
            r[i]=n%2;
            n=n/2;
        }
printf("Binary representation of Decimal number %d is=",N);
        for (int j=i-1; j>=0; j--)
        {
            printf("%d", r[j]);
        }

 }

 
 void Octa(int n)
 {


    int N=n;
    int r[32]={0};
    int i;
        for (i = 0; n>0; i++)    
        {
            r[i]=n%8;
            n=n/8;
        }
printf("Octal representation of Decimal number %d is=",N);
        for (int j=i-1; j>=0; j--)
        {
            printf("%d", r[j]);
        }

 }
 
 void Hexa(int n)
 {


    int N=n,rem;
    char r[32];
    
    int i;
        for (i = 0; n>0; i++)    
        {
            rem=n%16;
            if (rem<10)
            {
                r[i]=rem+'0';//converting it to ascii char
            }
            else            
            {
                r[i]=rem-10+'A';
            }
            
            n=n/16;
        }
printf("Hexadecimal representation of Decimal number %d is=",N);
        for (int j=i-1; j>=0; j--)
        {
            
        printf("%c",r[j]);
            
        }

 }