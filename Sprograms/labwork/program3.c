#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int i=0;

  printf("Enter any string: ");
  gets(str);

  while(str[i] != '\0')
  {
    if(str[i]>='A' && str[i]<='Z')
    {
      str[i]=str[i]+32;
    }
    else if(str[i]>='a' && str[i]<='z')
    {
      str[i]=str[i]-32;
    }
    i++;
  }
  printf("Toggle case string: %s\n",str);

  return 0;
}