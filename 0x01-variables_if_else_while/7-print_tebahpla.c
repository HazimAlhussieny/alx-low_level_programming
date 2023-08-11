#include <stdio.h>

/**
* main - entry point to the program
*
* Description: Lowercase alpahbet in reverse
*
* Return: Always (0) success
*/

int main(void)
{
char alphabet;
for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
