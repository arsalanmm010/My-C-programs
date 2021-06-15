#include <stdio.h>
#include <stdlib.h>

int remove_blanks(char input_string[], char output_string[])
{

    if(input_string[0] == '\0')    /// To catch empty strings
        return(0);


    /** Insert your code here */
    int c = 0, d = 0;
     while (input_string[c] != '\0')
   {
      if (!(input_string[c] == ' ' && input_string[c+1] == ' ')) {
        output_string[d] = input_string[c];
        d++;
      }
      c++;
   }

   output_string[d] = '\0';

   return c - d;
}

int main()
{
    char input_array[] = "This     is a     test      string!";
    char output_array[50];
    printf("The given string is: %s\n\n",input_array);

    int x = remove_blanks(input_array, output_array);

    printf("The string after removal of blanks: \n");
    puts(output_array);
    printf("\nNumber of blanks removed = %d\n", x);
}
