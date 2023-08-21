#include "main.h"

/**
*
*_puts(char *str)- Prints a str to stdout
*
*@str - The string
*
*Return: str
*/ 

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
	_putchar(*str);
}	
_putchar("\n");
}
