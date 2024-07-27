#include<stdio.h>

void main(){
    char pname[30];
    int quantity , price ;
    float  total , nettotal ;
    float discount ;

    printf("Enter the Product Name:");
    scanf("%s",&pname);

    printf("Enter The Quantity:");
    scanf("%d",&quantity);

    printf("Enter Price of The Product:");
    scanf("%d",&price);

    total = price * quantity ;

    printf("Total Price of Product is : %.2f \n",total);

    if (total >= 1500)
    {
        discount = total * 0.15 ;
        printf("Discount Price is:%.2f \n" , discount);
    }
    else if (total >= 1000)
    {
        discount = total * 0.1;
        printf("Discount Price is:%.2f \n" , discount);
    }
    else if (total >= 800)
    {
        discount = total * 0.08;
        printf("Discount Price is:%.2f \n" , discount);
    }else{
        printf("No Discount.... \n");
    }
    
    nettotal = total - discount ;

    printf("Your payble amount is %.2f", nettotal);
    
}