#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog: prints the credentials of a dog
 * @d: The pointer to the struct
 *
 * description: This functions prints the credentials of a dog including the name , age and owner
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
