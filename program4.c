// #include<stdio.h> 

// void main(){
//     int grid = 7629;
//     char name[]="BHAVINI PATEL";
//     float avg = 80.236;

//     printf("GRID is : %d \n" , grid);
//     printf("My Name is : %s \n", name);
//     printf("My AVG is : %.2f \n" , avg);
// }

// #include<stdio.h>

// void main(){
//     int a = 12, b = 6;
//     int c , d , e , f ,g;
//     c= a+b;
//     d= a-b;
//     e= a*b;
//     f= a/b;
//     g= a%b;
//     printf("Addition is :%d \n",c);
//     printf("Addition of %d and %d is : %d \n", a , b ,(a+b));
//     printf("Addition of %d and %d is : %d \n", a , b ,(a-b));
//     printf("Addition of %d and %d is : %d \n", a , b ,(a*b));
//     printf("Addition of %d and %d is : %d \n", a , b ,(a/b));
//     printf("Addition of %d and %d is : %d \n", a , b ,(a%b));
//     printf("Substraction is :%d \n",d);
//     printf("Multiplication is :%d \n",e);
//     printf("Division is :%d \n",f);
//     printf("Modual is :%d \n",g);
// }

// #include<stdio.h>

// void main(){
//     printf("\n- - - - - - - - -");
//     printf("\n|               |");
//     printf("\n| 5 x 5 =  25   |");
//     printf("\n|               |");
//     printf("\n- - - - - - - - -");
// }

// #include <stdio.h>

// void main(){
//     printf("HELLO....");
// }

// #include<stdio.h>
// void main(){
//     float pie = 3.14 , area;
//     int redius;

//     printf("Enter Redius:");
//     scanf("%d",&redius);

//     area = (pie*redius*redius);
//     printf("Area of Circle is %.2f",area);
// }

// #include<stdio.h>

// void main(){
//     int length,area;

//     printf("Enter Length:");
//     scanf("%d",&length);

//     area = (length*length);

//     printf("Area of Rectangle is %d",area);    
// }

// #include<stdio.h>

// void main(){
//     int base;
//     int length;
//     float area;

//     printf("Enter the base of Triangle :");
//     scanf("%d",&base);

//     printf("Enetr the Length Of a triangle:");
//     scanf("%d",&length);

//     area = (base*length)/2;

//     printf("Area of a Triangle is:%.2f",area);
// }

// #include<stdio.h>

// void main(){
//     int p ;
//     int n;
//     int r;
//     float sm;


//     printf("Enter Principle of Amount :");
//     scanf("%d",&p);

//     printf("Enter Rate of Intrest :");
//     scanf("%d",&r);

//     printf("Enter the number of time in Month:");
//     scanf("%d",&n);

//     sm =(p*r*n)/100;

//     printf("Simple Intrest is  %.2f:",sm);
// }

#include<stdio.h>

void main(){
    float pie = 3.14;
    int r;
    float perimeter;
    
    printf("Enter The Redius:");
    scanf("%d",&r);

    perimeter = 2 *pie * r;

    printf("The Perimeter of circle is : %.2f",perimeter);
}