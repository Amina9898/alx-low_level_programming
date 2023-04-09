#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints c to stdout
 * @c: charecter to print
 * Return: a if successful and -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
