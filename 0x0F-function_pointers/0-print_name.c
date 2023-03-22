#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function will print name
 * @namme: name
 * @f: pointer to function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
