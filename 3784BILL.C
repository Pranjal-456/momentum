#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int unit;
    float bill ,sr, totalamount;
    printf(" enter total electricity");
    scanf("%d",&unit);

    if(unit<=50)
      {
	bill=unit*0.50;
      }
      else if(unit<=150)
      {
	bill=(unit<-50)*0.75+25;
      }
      else if(unit<=250)
      {
	bill=(unit-150)*1.20+100;
      }
      else
      {
	bill=(unit-250)*1.50+220;
      }
      sr = unit*0.20;
      totalamount =(unit+sr);
      printf("electricity total bill",totalamount);
      getch();

}