#include "main.h"

/**
 * _strcat - function will
 * @dest : first string
 * @src : second string
 * Return: concatnation of two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}

	return (dest);
}
