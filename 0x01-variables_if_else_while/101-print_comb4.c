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
int numb1;
int numb2;
int numb3;
for (numb1 = 0 ; numb1 <= 9 ; numb1++)
{
	for (numb2 = 0 ; numb2 <= 9 ; numb2++)
	{
		for (numb3 = 0 ; numb3 <= 9 ; numb3++)
		{
			if (numb1 > numb2 || numb2 > numb3 || numb1 > numb3)
			{
				continue;
			}
			else if (numb1 == numb2 || numb2 == numb3 || numb1 == numb3)
			{
				continue;
			}
			putchar('0' + numb1);
			putchar('0' + numb2);
			putchar('0' + numb3);
			if (numb1 == 7 && numb2 == 8 && numb3 == 9)
			{
			continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
