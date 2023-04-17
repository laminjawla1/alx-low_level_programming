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
		printf("(nil)\n");
	if (!d->owner)
		printf("(nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
