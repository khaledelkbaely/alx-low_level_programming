#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age og the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
