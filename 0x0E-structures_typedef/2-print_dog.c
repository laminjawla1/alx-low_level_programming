#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints the fields of the dog
*@d: Dog obj
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
