#include<stdio.h>
void main(){
    int maths, english, gujarati;
    float total, avg;

    printf("\nEnter the marks of Maths:");
    scanf("%d",&maths);
    
    printf("\nEnter the marks of English:");
    scanf("%d",&english);
    
    printf("\nEnter the marks of Gujrati:");
    scanf("%d",&gujarati);

    total = maths + english + gujarati ;
    
    avg = total / 3.0 ;
    
    printf("\nThe Avarage of Three subjects is: %.2f",avg);

    // if(total < 300.0){

    //     printf("The Avarage of Three subjects is: %.2f",avg);
    // }else{
    //     printf("Sorry, Wrong Marks are Entered");
    // }
}