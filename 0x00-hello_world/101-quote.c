#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
 * Return: Always 1 (Success)
 * Description: C program that prints a specific
 * sentence to the standard output.
 * main - Entry point to the program
 */
int main(void)
{
char sntnc[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, sntnc, strlen(sntnc));
return (1);
}

