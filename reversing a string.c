#include <stdio.h>
#include <stdlib.h>


char * str_rev(char * str)
{
    /** Insert your code below **/
    int len, i;
    char ch;

    for(len = 0; *(str+len)!= '\0'; len++);
    for(i=0; i < len/2; i++)
    {
        ch =*(str+i);
        *(str + i) = *(str + len -1 - i);
        *(str + len - 1 -i) = ch;
    }

    return(str);
}

int main()
{
    char str[20];
    printf("Enter a string to reverse: \n");
    gets(str);
    printf("The reversed string is: %s",str_rev(str));
}
