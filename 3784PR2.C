#include<stdio.h>
#include<conio.h>
main()
{

  char per;
  clrscr();
  printf("enter per=");
  scanf("%c",&per);
  if((per>='a' && per<='z')||(per>='A' && per<='Z'))
  {
  printf("per %c is aalphabet",per);
  }
  else if (per>='0' && per<'9')
  {
   printf("per %c is digit",per);
  }
  else
  {
   printf("per %c is speaial character",per);
  }

  getch();
}












