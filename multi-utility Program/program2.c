#include<stdio.h>

void main(){
    int salary;
    float hra , da , ta , total , gross;


    printf("\nEnter Your Salary:");
    scanf("%d",&salary);

    printf("\nEnter The HRA:");
    scanf("%f",&hra);
    printf("\nEnter The DA:");
    scanf("%f",&da);
    printf("\nEnter The TA:");
    scanf("%f",&ta);

    hra =(hra/100.0)*salary;
    da =(da/100.0)*salary;
    ta =(ta/100.0)*salary;

    printf("\nThe value of HRA is %.2f",hra);
    printf("\nThe value of DA is %.2f",da);
    printf("\nThe value of TA is %.2f",ta);
    
    // hra = (10/100.0)*salary;
    // da = (5/100.0)*salary;
    // ta = (8/100.0)*salary;

    // printf("\nThe value of HRA is %.2f",hra);
    // printf("\nThe value of DA is %.2f",da);
    // printf("\nThe value of TA is %.2f",ta);

    total = (hra + da + ta) ;
    printf("\n%.2f",total);
    
    gross = salary + total;

    printf("\nThe Gross of Salary is %.2f",gross);
}