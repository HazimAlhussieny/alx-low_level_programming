#include "main.h"

/**
*print_rev(char *s);-  string, in reverse, followed by a new line.
*
*@s : The string to print
*
*Return : void
*/ 

void print_rev(char *s)
{
int length = strlen(s);
for (; length = >0 ; length--)
{
	putchar(s[length]);
}
}