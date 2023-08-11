#include <stdio.h>

/**
* main - entry point to the programe
*
* Description: Prints lowercase and uppercase
*
* Return: ALways (0) success
*/

int main(void)
{
char letter;
char Letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
	putchar(letter);
}
for (Letter = 'A' ; Letter <= 'Z' ; Letter++)
{
	putchar(Letter);
}
putchar('\n');
return (0);
}
