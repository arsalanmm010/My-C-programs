#include <stdio.h>
#include <stdlib.h>
int odd_sum(int start, int end);

 int main(void)
{
    int a,b;
    printf("Enter the starting and ending numbers: \n");
    scanf("%d %d",&a,&b);
    odd_sum(a,b);
}

/** Task 3:
    Write a function odd_sum() that computes the sum of all the odd
    integers between the two input numbers and returns the result.
*/

int odd_sum(int start, int end)
{
    /** Insert your code here **/
    int i,sum=0;
    if(start % 2 != 0){
        start = start;
    }
    else
        {start = start + 1;
        }
    if(end % 2 != 0)
    {
        end = end;
    }
    else{
        end = end - 1;
    }
    for(i = start; i<= end; i+= 2){
         sum = sum + i;
        }
printf("%d",sum);
    return(0);
}
