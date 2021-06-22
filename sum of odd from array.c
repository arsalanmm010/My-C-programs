#include <stdio.h>
#include <stdlib.h>

long odd_sum(int array[], int size)
{

   int sum = 0;
    for(int i =0; i<size; i++)
   {
       if(array[i] % 2 != 0)
            sum = sum + array[i];
}
 return sum;

}

int main()
{
    int n;
    long sum;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array numbers: \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sum = odd_sum(&a,n);
    printf("The sum of odd numbers in array is: %d",sum);
    return 0;
}
