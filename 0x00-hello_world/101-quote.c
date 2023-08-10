#include<stdio.h>
#include <unistd.h>
#include <string.h>

/*
 * main - entry part of the program
 *  Descritpion : C program that prints exactly
 *((and that piece of art is useful - Dora Korpar, 2015-10-19,))
 */
int main(void) 
{
char sntnc[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, sntnc, strlen(sntnc));
return (1);
}
