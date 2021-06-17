#include <stdio.h>
#include <stdlib.h>

long nth_fibonacci(int n)
{
      int  i,n3,n1=0,n2=1;
   if(n>=0)
   {
       if(n>1){
       for(i = 2; i<= n; ++i)
       {
           n3 = n1 + n2;
           n1 = n2;
           n2 = n3;
       }
       return n3;
       }
       else if(n==1)
       {
           return (1);
       }
       else
       {
           return (0);
       }

   }
   else
   {
       return (-1);
   }
   return(0);
}

int main()
{
    int n;
    long num;
    printf("Enter a number for fibonacci series: \n");
    scanf("%d",&n);
    num = nth_fibonacci(n);
    printf("The fibonacci number of %d is: %d\n",n,num);
    return 0;
}
