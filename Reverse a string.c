#include <stdio.h>
#include <stdlib.h>

/** Task 1: Reverse a character string.

    Write a function called str_rev() that takes a pointer to a string
    as input and reverses the string in-place (this change should be
    reflected in the original string that was passed to the function,
    not to a copy of the string). No library functions for string
    reversal should be used. The function should also return a pointer
    to the reversed string.
*/

char * str_rev(char * str)
{
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
    printf("Enter a string to reverse: ");
    gets(str);
    printf("The reversed string is: \n%s",str_rev(str));
}
