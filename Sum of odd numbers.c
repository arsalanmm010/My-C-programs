#include <stdio.h>
#include <stdlib.h>

int odd_sum(int start, int end)
{
    int i,sum=0;
    if(start % 2 != 0)
        start = start;
    else
        start = start + 1;
    if(end % 2 != 0)
        end = end;
    else
        end = end - 1;
    for(i = start; i<= end; i+= 2)
         sum = sum + i;
    return sum;
}

int main()
{
    int num1,num2,num3;
    printf("Enter a starting number: \n");
    scanf("%d",&num1);
    printf("Enter the ending number: \n");
    scanf("%d",&num2);
    num3 = odd_sum(num1, num2);
    printf("The sum of odd numbers between %d and %d is: %d\n",num1,num2,num3);
    return 0;
}
