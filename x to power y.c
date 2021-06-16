#include <stdio.h>
#include <stdlib.h>

long x_pwr_y(int x, int y)
{
     int i,z=1;
     while (y < 0)
     {
         z = z / x;
         y++;
     }
       if (y > 0 ){
    for (i = 1; i <= y; i++){
         z = z * x;
    }
  }
  return z;

}

int main()
{
    int a,b;
    long c;
    printf("Enter the value of X: \n");
    scanf("%d",&a);
    printf("Enter the value of Y: \n");
    scanf("%d",&b);
    c = x_pwr_y(a,b);
    printf("X to power y is: %ld",c);
}
