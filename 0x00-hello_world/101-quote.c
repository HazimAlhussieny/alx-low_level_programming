#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
 * main - Entry point to the program.
 * Description: C program that prints a specific
 * sentence to the standard output. 
 * Return: Always 1 (Success).
 */
int main(void)
{
char sntnc[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, sntnc, strlen(sntnc));
return (1);
}

