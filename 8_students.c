/* Write a program to read the name of a student (studentName), roll
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
alphanumeric string. Display the data as read. Hint: Create a Student
structure and write appropriate functions.*/

#include<stdio.h>
typedef struct student_info 
{
    char  studentName[100];
    char rollNo[20];
    float totalMarks;

}stud;

void input(stud *s);
void display(stud *s);
int main()
{
stud s1;
input(&s1);
display(&s1);


    return 0;
}

void input (stud *s)
{
 printf("Enter student name: ");
    //scanf("%s",s->studentName);
    fgets(s->studentName,sizeof(s->studentName),stdin);

    printf("Enter roll number: ");
    scanf("%s",s->rollNo);

    printf("Enter total marks: ");
    scanf("%f", &s->totalMarks);


}void display(stud *s)
 {
    printf("\nStudent Details:\n");
    printf("Name: %s", s->studentName);
    printf("Roll No: %s", s->rollNo);
    printf("Total Marks: %.2f\n", s->totalMarks);
}