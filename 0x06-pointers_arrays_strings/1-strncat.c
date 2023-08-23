#include "main.h"

/**
*
*char *_strncat(char *dest, char *src, int n)-  concatenates two strings.
*
*@des - string
*@src - string
*@n - n bytes from src
*
*Return - s
*
*/ 
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
