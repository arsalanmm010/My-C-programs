#include <stdio.h>
#include <stdlib.h>

int solve_quadratic(double a, double b, double c, double * x1, double * x2)
{
      double d;
    d = b * b - 4 * a * c;

    if( a == 0.000000 )
    {
        // Linear
        *x1 = -c/b;
        *x2 = 0;
        return (-2);
    }

    if(d < 0)
    {
        *x1 = 0.0;
        *x2 = 0.0;
        return (-1);
    }
    else if(d==0)
    {
       // 1 solution or 1 root
       *x1 = -b/(2*a);
       *x2 = -b/(2*a);
       return (1);
    }
    else
    {

        // 2 solutions or 2 root
       *x1 = ( -b + sqrt(d)) / (2* a);
       *x2 = ( -b - sqrt(d)) / (2* a);
        return(2);
    }

    return(0);
}

int main()
{
    double a,b,c,*x1,*x2;
    printf("Enter values: \n");
    scanf("%f %f %f %f %f",&a,&b,&c,&x1,&x2);
    int s;
    s = solve_quadratic(a, b, c, &x1, &x2);
    printf("The quadratic equation has %d roots\n",s);
    return 0;
}
