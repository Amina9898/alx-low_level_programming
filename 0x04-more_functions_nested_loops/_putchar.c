#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stdout 
 * @c: the charecter to print 
 *
 * Return 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
