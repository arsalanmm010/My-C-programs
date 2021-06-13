#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char *word, int lower, int upper );

int main()
{
    char word[21];

    printf("Enter a word to check if it is a palindrome\n");
    fgets(word, 21,stdin);
    printf("%s\n",word);

    if(check(word, 0 ,strlen(word) - 2))
        printf("\nPalindrome\n");
    else
        printf("\nNot\n");

    return 0;
}


bool check(char* str, int lower, int upper)
{
	if (lower >= upper)
		return true;

	if (*(str+lower) != *(str+upper))
		return false;

	return check(str, lower + 1, upper -1);

}
