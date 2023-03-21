#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
