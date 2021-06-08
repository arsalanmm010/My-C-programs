#include<stdio.h>

void sortarray(int *array,int n);
float median(int arr[], int n);

main()
{

    float d = 0;
    int n=0,i=0;
    printf("enter size: \n");
    scanf("%d",&n);
    printf("enter elements of array: \n");
    int a[n];
    for(i = 0; i< n; i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

      sortarray(a,n);
      d = median(a, n);

      printf("the median is: %f \n",d);
}


void sortarray(int *array,int n)
{
    int i = 0, temp = 0, j = 0;

    for(i = 0; i<n; i++)
    {
        for(j = 0; j< n-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("the array after sorting is: \n");
    for(i = 0; i<n ; i++)
    {
        printf("\n array[%d] : %d\n\n", i,array[i]);
    }

}


float median(int arr[], int n)
{

    float median = 0;
    if (n%2 != 0)
         median = arr[n/2];
    else

        median = (arr[(n-1)/2] + arr[n/2]) / 2.0;

    return median;

}



