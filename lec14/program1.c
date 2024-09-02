#include<stdio.h>

struct student
{
    int stud_id;
    char stud_name[50];
    int stud_age;
    char stud_course[50];
    char stud_city[50];
    int stud_std;
    int stud_school[50];
};

void main(){
    struct student s1,s2,s3;

    printf("First Student Detail\n");
    printf("Enter Student ID :");
    scanf("%d",&s1.stud_id);
    printf("Enter Student Name :");
    scanf("%s",&s1.stud_name);
    printf("Enter Student Age :");
    scanf("%d",&s1.stud_age);
    printf("Enter Student Course:");
    scanf("%s",&s1.stud_course);
    printf("Enter Student City :");
    scanf("%s",&s1.stud_city);
    printf("Enter Student Standard :");
    scanf("%d",&s1.stud_std);
    printf("Enter Student School :");
    scanf("%s",&s1.stud_school);

    printf("\nStudent Id :%d",s1.stud_id);
    printf("\nSudent Name : %s",s1.stud_name);
    printf("\nStudent Age : %d",s1.stud_age);
    printf("\nStudent Course :%s",s1.stud_course);
    printf("\nStudent city :%s",s1.stud_city);
    printf("\nStudent Standartd :%d",s1.stud_std);
    printf("\nStudent School :%s",s1.stud_school);

    printf("Second Student Detail\n");
    printf("Enter Student ID :");
    scanf("%d",&s2.stud_id);
    printf("Enter Student Name :");
    scanf("%s",&s2.stud_name);
    printf("Enter Student Age :");
    scanf("%d",&s2.stud_age);
    printf("Enter Student Course:");
    scanf("%s",&s2.stud_course);
    printf("Enter Student City :");
    scanf("%s",&s2.stud_city);
    printf("Enter Student Standard :");
    scanf("%d",&s2.stud_std);
    printf("Enter Student School :");
    scanf("%s",&s2.stud_school);

    printf("\nStudent Id :%d",s2.stud_id);
    printf("\nSudent Name :%s",s2.stud_name);
    printf("\nStudent Age :%d",s2.stud_age);
    printf("\nStudent Course :%s",s2.stud_course);
    printf("\nStudent city :%s",s2.stud_city);
    printf("\nStudent Standartd :%d",s2.stud_std);
    printf("\nStudent School :%s",s2.stud_school);

    printf("Third Student Detail\n");
    printf("Enter Student ID :");
    scanf("%d",&s3.stud_id);
    printf("Enter Student Name :");
    scanf("%s",&s3.stud_name);
    printf("Enter Student Age :");
    scanf("%d",&s3.stud_age);
    printf("Enter Student Course:");
    scanf("%s",&s3.stud_course);
    printf("Enter Student City :");
    scanf("%s",&s3.stud_city);
    printf("Enter Student Standard :");
    scanf("%d",&s3.stud_std);
    printf("Enter Student School :");
    scanf("%s",&s3.stud_school);

    printf("\nStudent Id :%d",s3.stud_id);
    printf("\nSudent Name :%s",s3.stud_name);
    printf("\nStudent Age :%d",s3.stud_age);
    printf("\nStudent Course :%s",s3.stud_course);
    printf("\nStudent city :%s",s3.stud_city);
    printf("\nStudent Standartd :%d",s3.stud_std);
    printf("\nStudent School :%s",s3.stud_school);
}