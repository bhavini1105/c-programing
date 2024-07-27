#include<stdio.h>

void main(){
    int ch , ch1 , ch2 , ch3 ;

    printf("\n Press 1 for English");
    printf("\n Press 2 for Hindi");
    printf("\n Press3 for Gujrati");

    printf("\n Enter Your Choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\n Press 1 for Internet Recharge ");
        printf("\n Press 2 for Top-up Recharge ");
        printf("\n Press 3 for Special Recharge ");

        printf("\n Enter Your Choice :");
        scanf("%d",&ch1);

            switch (ch1)
            {
            case 1:
                printf("\n Internet Recharge Sucessfully Done");
                break;
            case 2:
            printf("\n Top-up Recharge sucessfully Done");
            break;
            case 3 :
            printf("\n Special Recharge sucessfully Done");
            break;
            default:
            printf("Wrong Choice");
                break;
            }

        break;
    
    case 2 :

        printf("\n Internet Recharge ke liye 1 dabaiye ");
        printf("\n Top-up Recharge ke liye 2 dabaiye ");
        printf("\n Special Recharge ke liye 3 dabaiye");

        printf("\n Enter Your Choice :");
        scanf("%d",&ch2);

            switch (ch2)
            {
            case 1:
                printf("\n Internet Recharge Hogaya");
                break;
            case 2:
            printf("\n Top-up Recharge Hogaya");
            break;
            case 3 :
            printf("\n Special Recharge Hogaya");
            break;
            default:
            printf("\n Galat Number");
                break;
            }

    break;


    case 3 :

        printf("\n Internet Recharge mate 1 dabavo ");
        printf("\n Top-up Recharge mate 2 dabavo ");
        printf("\n Special Recharge mate 3 dabavo");

        printf("\n Enter Your Choice :");
        scanf("%d",&ch3);

            switch (ch3)
            {
            case 1:
                printf("\n Tame safaltapurvak Special Recharge karyu chhe.");
                break;
            case 2:
                printf("\n Tame safaltapurvak Top-up Recharge karyu chhe.");
                break;
            case 3 :
                printf("\n Tame safaltapurvak Special Recharge karyu chhe.");
                break;
            default:
                printf("\n Khoto Number");
                break;
            }
    

    break;
        
    default:
        printf("\n Wrong Choice");
    break;
    }
}