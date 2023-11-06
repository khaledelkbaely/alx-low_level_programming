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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
