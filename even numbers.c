#include <stdio.h>
#include <stdlib.h>

int main()
{
     int N,M,num;

	  printf("Enter 2 numbers:  ");
	  scanf("%d %d",&N,&M);

	  printf("Even numbers from %d to %d are:    \n", N,M);

	  for(num=N;num<=M;num++)
	  {
            if(num%2 == 0)
            {
                printf("%d\n",num);
            }
      }
    return 0;
}
