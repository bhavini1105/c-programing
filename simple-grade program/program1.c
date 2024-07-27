#include<stdio.h>

void main(){
    int maths , hindi , gujarati ,total ;
    float avg ;
    char grade ;

    printf("Enter The Marks of Maths:");
    scanf("%d",&maths);
    
    printf("Enter The Marks of Hindi:");
    scanf("%d",&hindi);
    
    printf("Enter The Marks of Gujarati:");
    scanf("%d",&gujarati);

    total = maths + hindi + gujarati;

    avg = total/3.0;

    printf("Total Marks of All Subject is %d.",total);

    printf("\n Avarage of MArks is %.2f .", avg);

    grade = avg >= 92 ? 'A' : avg >= 80 ? 'B' : avg >= 70 ? 'C' : avg >= 60 ? 'D' : 'F';

    switch (grade)
    {
    case 'A' :
        printf("\n Your Grade is A");
        break;
    
    case 'B' :
        printf("\n Your Grade is B");
        break;
    
    case 'C' :
        printf("\n Your Grade is C");
        break;
    
    case 'D' :
        printf("\n Your Grade is D");
        break;
    
    default:
        printf("\n Sorry You are Fail... ");
        break;
    }

    if (maths >= 100 && hindi >=35 && gujarati >= 35)
    {
        printf("\n Congratulations! You are eligible for the next level");
    }
    else{
        printf("\n Please try again next time");
    }
}