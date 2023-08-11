#include <stdio.h>

/**
* main- entry point to the program
*
* Description: All possible combinations of single number
*
* Return: Always (0) success
*/

int main(void)
{
int numb;
for (numb = 0 ; numb <= 9 ; numb++)
{
	putchar('0' + numb);
	if (numb==9)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
