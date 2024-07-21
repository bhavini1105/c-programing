#include<stdio.h>
void main(){
    int maths, english, gujarati,rollno;
    float total, avg;
    char name[20];

    printf("\nEnter Your Name:");
    scanf("%s",&name);

    printf("Enter Rollno:");
    scanf("%d",&rollno);

    printf("\nEnter the marks of Maths:");
    scanf("%d",&maths);
    
    printf("\nEnter the marks of English:");
    scanf("%d",&english);
    
    printf("\nEnter the marks of Gujrati:");
    scanf("%d",&gujarati);

    total = maths + english + gujarati ;
    
    avg = total / 3.0 ;
    
    printf("\nThe Avarage of Three subjects is: %.2f",avg);
    
    if (avg > 90)
    {
        printf("\n Your Grade is A..");
    }
    else if (avg > 80)
    {
        /* code */
    }
    
    
}