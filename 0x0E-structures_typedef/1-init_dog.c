#include <stdio.h>
#include "dog.h"
/**
 * init_dog - variable of the structure
 * @d: pointer to mydog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
