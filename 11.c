

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double Salary;
};
void emp_init(struct Employee *e);
void set_salary(struct Employee *e,double sal);
void emp_disp(struct Employee *e);
void yearly_salary(struct Employee *e);

int main(){
    struct Employee emp1,emp2;
    emp_init(&emp1);
    emp_init(&emp2);
    printf("Employee 1\n");
    emp_disp(&emp1);
    printf("Employee 2\n");
    emp_disp(&emp2);
    printf("Employee 1\n");
    yearly_salary(&emp1);
    printf("Employee 2\n");
    yearly_salary(&emp2);
    set_salary(&emp1,1.1*emp1.Salary);
    set_salary(&emp2,1.1*emp2.Salary);
    printf("After Raise\n");
    printf("Employee 1\n");
    yearly_salary(&emp1);
    printf("Employee 2\n");
    yearly_salary(&emp2);
    return 0;
}
void emp_init(struct Employee *e){
    printf("Enter first name of the employee: ");
    scanf("%s",e->firstName);
    printf("\nEnter last name of the employee: ");
    scanf("%s",e->lastName);
    printf("\nEnter the salary: ");
    scanf("%lf",&e->Salary);
}
void emp_disp(struct Employee *e){
    printf("First name:%s\n",e->firstName);
    printf("Last name:%s\n",e->lastName);
    printf("Salary:%lf\n",e->Salary);
}
void set_salary(struct Employee *e,double sal){
    e->Salary = sal;
}
void yearly_salary(struct Employee *e){
    printf("Yearly salary: %lf\n",e->Salary*12);
}

