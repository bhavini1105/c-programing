#include <stdio.h>
#include <string.h>
void main()
{
  int len,i = 0, ch = 0, num = 0, sp = 0;
  char str[20];

  printf("Create your password: ");
  gets(str);

  len = strlen(str);

  if (len >= 6)
  {
    while (str[i] != '\0')
    {

      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      {
        ch++;
      }
      else if (str[i] >= '0' && str[i] <= '9')
      {
        num++;
      }
      else if ((str[i] >= '!' && str[i] <= '/') || (str[i] == '@'))
      {
        sp++;
      }

      i++;
    }
    printf("Your password is %s", (ch != 0 && num != 0 && sp != 0) ? "Strong" : "Not Strong");
  }
  else
  {
    printf("Password must be at least 6 characters");
  }
}