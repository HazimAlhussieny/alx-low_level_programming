#include <stdio.h>

/**
* main - entry point to the program
*
* Description:  prints the alphabet in lowercase.
*
* Return: Always (0) Success
*/

int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
	if (letter == 'q' || letter == 'e')
	{
		continue;
	}
	putchar(letter);
}
putchar('\n');
return (0);
}
