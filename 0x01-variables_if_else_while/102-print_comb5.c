#include <stdio.h>

/**
* main- Entry point to the program
*
* Description: all possible different combinations of three digits.
*
* Return: Always (0) success
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 98; num1++)
{
	for (num2 = num1 + 1; num2 <= 99; num2++)
	{
		putchar('0' + (num1 / 10));
		putchar('0' + (num1 % 10));
		putchar(' ');
		putchar('0' + (num2 / 10));
		putchar('0' + (num2 % 10));
		if (num1 == 98 && num2 == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
