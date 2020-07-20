#include<stdio.h>
#include<stdbool.h>

struct employee
{
    int empno;
    char empnam[30];
    char department[30];
    double salary;

}s[10];

void input()
{
    printf("\nENTER THE FOLLOWING EMPLOYEES DETAILS: ");
    for(int i=0;i<10;i++)
    {
      printf("\nENTER THE DETAILS OF %d'S EMPLOYEE: ",i+1);
      printf("\nENTER THE EMPLOYEE NUMBER: ");
      scanf("%d",&s[i].empno);
      printf("\nENTER THE EMPLOYEE NAME: ");
      scanf("%s",&s[i].empnam);
      printf("\nENTER THE EMPLOYEE DEPARTMENT: ");
      scanf("%s",&s[i].department);
      printf("\nENTER THE EMPLOYEE SALARY: ");
      scanf("%lf",&s[i].salary);
    }
}

void display()
{
    printf("\n\t\t\tTHE FOLLOWING EMPLOYEE DETAILS ARE!: ");
    printf("\n\n\tNO\t\tNAME\t\tDEPARTMENT\t\tSALARY");
    for(int i=0;i<10;i++)
    {
       printf("\n\t%d,\t\t%s,\t\t%s,\t\t%lf",s[i].empno,s[i].empnam,s[i].department,s[i].salary);
    }
}

int main()
{
     input();
     display();

    return 0;
}
