#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print the elements of the struct dog
 *
 * @d: pointer to the struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age)
			printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
