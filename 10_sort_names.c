// at most 10 names of students
//store them into an array of char nameOfStudents[10][50]
//Sort the array and display them back
#include<stdio.h>
#include <string.h>
void accept_name(char arr[10][50]);
void display(char nameOfStudents[][50]);
 int main()
 {
char nameOfStudents[10][50];
accept_name(nameOfStudents);




     return 0;
 }
 void accept_name(char nameOfStudents[][50])
 {
     int n;
    printf("enter how many names you want to enter(max=10)");
    scanf("%d",&n);
      

    for (int i = 0; i < n; i++)
    {
        printf("enter the name");
        scanf(" %s",nameOfStudents[i]);
    }

   /* printf("displaying name char by char");
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=strlen(nameOfStudents[i]); j++)
        {
            printf("\narr[%d][%d]%c",i,j,nameOfStudents[i][j]);
        }
    }*/
    char name[50];
for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if(strcmp(nameOfStudents[j],nameOfStudents[j+1])>0)
        { 
            strcpy(name,nameOfStudents[j]);
            strcpy(nameOfStudents[j],nameOfStudents[j+1]);
            strcpy(nameOfStudents[j+1],name);
        }
    }
    
}

for (int i = 0; i < n; i++)
    {
            printf("\n%s",nameOfStudents[i]);
        
    }

 }
 //sorting// compare two strings if strcmp returns zero= same strings and if>0 then swap them 

 

 