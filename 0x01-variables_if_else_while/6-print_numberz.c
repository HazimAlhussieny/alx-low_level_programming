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
int j = 0;
int n_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
int letter_number;
for (i = 0 ; i < 10 ; i++)
{
	a_array[i] = n_array[i];
}
for (letter_number = a_array[j] ; letter_number <= 'j' ; j++)
{
	putchar(letter_number);
}
putchar('\n');
return(0);
}
