#include <stdio.h>

/**
* main- Entry point to the program
*
* Description: All possible combinations of two digits
*
* Return: Always (0) success
*/

int main(void)
{
int numb1;
int numb2;
for (numb1 = 0 ; numb1 <= 9 ; numb1++)
{
	for (numb2 = 1 ; numb2 <= 9 ; numb2++)
	{
		if (numb1 == numb2)
		{
			continue;
		}
		else if (numb1 > numb2)
		{
			continue;
		}
		putchar('0' + numb1);
		putchar('0' + numb2);
		if (numb1 == 8 && numb2 == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
