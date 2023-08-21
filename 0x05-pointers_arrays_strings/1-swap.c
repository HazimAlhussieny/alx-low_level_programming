#include "main.h"

/**
*swap_int(int *a, int *b) - swap the values of two integer.
*
*Return: void
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
