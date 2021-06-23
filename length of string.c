#include <stdio.h>
#include <stdlib.h>

/** Calculate the length of a null terminated character array

    Write a function string_length() that calculates the length of the
    input character array. The array will be NULL terminated. i.e. the
    last element of the array will be '\0'. The function should return
    the length as an integer value.
*/

int string_length(char array[])
{
    int d = 0;
    while(array[d] != '\0'){
        d++;
    }
    return d;
}

int main()
{
    int f;
    char a[] = "hello world!";
    f = string_length(&a);
    printf("The length of string is: %d",f);
    return 0;
}
