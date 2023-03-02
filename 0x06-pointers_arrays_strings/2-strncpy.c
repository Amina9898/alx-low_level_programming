#include "main.h"

/**
 * _strncpy - function will copy strings
 * @dest : destination string
 * @src : source string
 * @n : size of charecters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
		}
	}
	return (dest);

}
