#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int myd,Position,above,i;

int newPosition;
main()
{

   srand(time(NULL));

    int  j;
    int space = 3;



    for (i=36;i>30;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|_%d__|",i);
    }
    printf("\n");
     for (i=30;i>24;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|_%d__|",i);
    }
     printf("\n");
     for (i=24;i>18;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|_%d__|",i);
    }
     printf("\n");
     for (i=18;i>12;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|_%d__|",i);
    }
     printf("\n");
     for (i=12;i>9;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|_%d__|",i);
    }
     for (i=9;i>06;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|__%d__|",i);
    }
     printf("\n");
     for (i=06;i>00;i--)
    {
         for(j=0;j<=2;j++)
	    {
		    printf(" ");
	    }

            printf("|__%d__|",i);


    }
    printf("\n3=Ladder to 16\n");
      printf("5=Ladder to 7    12=Snake  to 2\n");
      printf("15=Ladder to 25    17=Snake  to 4\n");
      printf("14=Snake  to 11     18=Ladder to 20\n");
      printf("21=Ladder to 32    31=Snake  to 19\n");
      printf("35=Snake  to 22\n");
      printf("36=End\n");



      dice();
    checkPosition();


}
dice()
{
    do{

    printf("Roll a dice:\n");
      myd = toupper( getche() );
      myd =((rand()%6)+1);
      printf("\nYou have rolled a %d.\n", myd);








     Position+=myd;

      if(Position >36)
           {above = (Position-36);
           Position = (36 - above);}



      printf("\nYou have landed on box %d.\n", Position);













       checkPosition();


      if (Position<newPosition)
         {printf("\nWell done, you have landed on a ladder. You are now on box %d.", newPosition);}

      if (Position>newPosition)
         {printf("\nUnlucky, you have landed on a snake. You are now on box%d.", newPosition);}

      Position = newPosition;

      }while(Position<36);

     printf("Congratulations, you have won!!!");
     getch();
return 0;

}






checkPosition()
{

	unsigned char ch;
	unsigned char output;
	unsigned char state;

do
{
	ch = getch();
	if(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6')
	{switch(state)
	{case 4:
		if(ch == '1')
		{output = 1;
		state = 7;}

		else if(ch == '2')
		{
			output = 2;
			state = 6;}

			else if(ch == '3')
		{
			output = 3;
			state = 7;}

			else if(ch == '4')
		{
			output = 4;
			state = 8;}

			else if(ch == '5')
		{
			output = 5;
			state = 9;}

			else if(ch == '6')
		{
			output = 6;
			state = 10;}
			break;


	}
}
	}while(ch!='x');
}


