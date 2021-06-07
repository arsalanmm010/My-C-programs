#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    unsigned char d;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("enter another number: ");
    scanf("%d",&b);
    d = '+,-,*,/';

    printf("enter a choice: (+, -, *, / ");
    scanf("%d",&d);

    if(d = '+'){
        c = a + b;
    }
    else if(d = '-'){
        c = a - b;
    }
    else if(d = '*'){
        c = a*b;
    }
    else{
        c = a/b;
    }
    printf("%d",c);
    return 0;
}
