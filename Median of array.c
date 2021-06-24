#include <stdio.h>
#include <stdlib.h>

/** Task 5: Find the median of numbers in the array

    Write a function median_of_array() that takes a floating point
    number array and its size as inputs and computes the median of
    the data given in that array.
*/

 float median_of_array(float num_array[], int size)
 {
    if(size == 0)
    {
        printf("\nMedian function received an array with size 0!\n");
        exit(-1);
    }

    /** Insert your code here */

     float median=0;

    // if number of elements are even
    if(size%2 == 0)
        median = (num_array[(size-1)/2] + num_array[size/2])/2.0;
    // if number of elements are odd
    else
        median = num_array[size/2];

    return median;
 }



int main()
{
    int size;
    printf("Enter size of array: \n");
    scanf("%d",&size);

     float num_array[size];
     printf("Enter float numbers in array: \n");
    for(int i=0; i<size; i++)
    scanf("%f",&num_array[i]);

    printf("The median is: %3.3f\n", median_of_array(num_array, 6));
}
