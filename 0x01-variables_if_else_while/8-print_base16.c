#include <stdio.h>

/**
* main- entry point to the program
*
* Description: All numbers in base (16) in lowercase
*
* Return: Always (0) success
*/

int main(void)
{
int numbers;
char alphabet;
for (numbers = 0 ; numbers <= 9 ; numbers++)
{
	putchar('0' + numbers);
}
for (alphabet = 'a' ; alphabet <= 'f' ; alphabet++)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
