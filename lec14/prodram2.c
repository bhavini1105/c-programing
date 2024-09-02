#include<stdio.h>

struct employe
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_exp;
    char emp_cmp_name[50];
};

void main(){

    struct employe emp[10];

    for (int i = 0; i < 10; i++)
    {
        printf("ENter Employe Id :");
        scanf("%d",&emp[i].emp_id);
        printf("Enter Employee Name:");
    }
    

}