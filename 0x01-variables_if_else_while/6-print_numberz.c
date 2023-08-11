#include <stdio.h>

/**
* main - entry point to the program
*
* Description: print using putchar
*
* Return: Always (0) success
*
*/

int main(void)
{
int i;
int n_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
for (i = 0 ; i < 10 ; i++)
{
	putchar('0' + n_array[i]);
}
putchar('\n');
return (0);
}
