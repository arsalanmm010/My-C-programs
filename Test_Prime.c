#include <stdio.h>
#include <stdlib.h>

int test_prime(int num) {
    int flag = 0;
    if(num > 0){
        for(int i=2; i<=num/2; i++)
        {
            if(num % i == 0){
                flag = 1;
                return 0;
            }
        }
        if(num == 1)
            return 0;
        else if(flag == 0)
            return 1;
    }
    else
        return -1;
}

int main()
{
    int n,s;
    printf("Enter a positive number to check whether prime or not: \n");
    scanf("%d",&n);
    s = test_prime(n);
    if(s == 1)
        printf("The number is Prime");
    else
        printf("The number is not Prime");
    return 0;
}
