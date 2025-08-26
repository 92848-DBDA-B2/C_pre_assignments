#include<stdio.h>
#define SIZE 3
typedef struct  Employee
{
 char first_name[10];
 char last_name[10];
 double m_sal;
 double annual_Sal;
 double raise;

}emp;

void accept_data(emp *e);
void display_data(emp *e);
void modify_data(emp *e);
void annual_sal(emp *e);
void raise_Sal(emp *e);

int main()
{

emp e1;
accept_data(&e1);
display_data(&e1);

char ch;

printf("do you want to modify the Employee data? Y/N");
scanf(" %c",&ch);
if(ch=='y'|| ch=='Y')
{
    modify_data(&e1);
}

 printf("\nsecond employee");
emp e2;
accept_data(&e2);
display_data(&e2);




printf("do you want to modify the Employee data? Y/N");
scanf(" %c",&ch);
if(ch=='y' || ch=='Y')
{
    modify_data(&e2);
}


// for n number of employees
/*emp e[SIZE];
int choice=0;
for(int i=0;i<SIZE;i++)
{
do
{
    printf("MAIN MENU \n1)accept\n2)display\n3)modify\n4)exit\n");
    scanf("%d",&choice);


switch (choice)
{
                case 1:
                    accept_data(&e[i]);
                    //annual_sal(&e[i]);
                    //raise_Sal(&e[i]);
                break;
                case 2:
                    display_data(&e[i]);
                    break;
                case 3:
                    modify_data(&e[i]);
                    break;
                case 4:
                    break;
default:
    break;
}
} while (choice!=0);
}*/
    return 0;
}

void accept_data(emp *e)
{

printf("enter the first name");
scanf("%s",&e->first_name);
printf("enter the last name");
scanf("%s",&e->last_name);
printf("enter the monthly salary");
scanf("%lf",&e->m_sal);
annual_sal(e);
raise_Sal(e);

}

void display_data(emp *e)
{
printf("\nfirst name %s",e->first_name);
printf("\nlast name %s",e->last_name);
printf("\nmonthly sal %lf",e->m_sal);
printf("\nannual sal %lf",e->annual_Sal);
printf("\n salary after increment is %lf",e->raise);

}

void modify_data(emp *e)
{
int choice;
do{
    printf("\nchoose \n1)update first name\n 2)update last name\n3) update salary\n 4)exit");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("\ncurrent first name %s",e->first_name);
    printf("\nenter the new first name");
    scanf("%s",&e->first_name);
    display_data(e);
    break;
case 2:
    printf("\ncurrent last name %s",e->last_name);
    printf("\nenter the new last name");
    scanf("%s",&e->last_name);
    display_data(e);
    break;
case 3:
    printf("\ncurrent salary %lf",e->m_sal);
    printf("\nenter the new salary");
    scanf("%lf",&e->m_sal);
    annual_sal(e);
    raise_Sal(e);
    display_data(e);
    break;
case 4:
    printf("\nEXITING....");
    break;
default:
    printf("invalid input\n");
    break;
}
}while(choice!=4);

}

void annual_sal(emp *e)
{


e->annual_Sal= e->m_sal *12;
//printf("annual salary is: %lf\n", e->annual_Sal);

}
void raise_Sal(emp *e)
{
    e->raise=(0.1 * e->annual_Sal)+e->annual_Sal;
    //printf("\nraise %lf",e->raise);

}