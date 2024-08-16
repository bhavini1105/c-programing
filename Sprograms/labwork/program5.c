
#include <stdio.h>
#include <string.h>
 int main()
  {
    char user[20],userp[20],myid[20]="admin@gmail.com",mypw[20]="123456";
    printf("Enter your email:");
    gets(user);
    printf("Enter your password:");
    gets(userp);

    if(strcmp(myid,user)== strcmp(mypw,userp))
    {
      printf("Login Successful...");
    }
    else
    {
      printf("Login Failed.\n Invalid Credentials.");
    }
    return 0;
  } 