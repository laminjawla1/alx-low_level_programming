#include "dog.h"
#include <stdlib.h>
/**
*free_dog - frees memory allocated to the dog object
*@d: Dog obj
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
