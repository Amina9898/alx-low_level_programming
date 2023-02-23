#include"main.h"

/**
 * _isupper - will check for uper case
 * description: function che
 * @c: input
 * Return: Returns 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
