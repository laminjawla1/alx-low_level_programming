#include <stdlib.h>
#include "dog.h"
/**
*new_dog - instantiate a new dog object
*@name: field1
*@age: field2
*@owner: field3
*Return: A new dog object if successful else NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
