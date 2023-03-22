#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function will
 * @d: name of struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}