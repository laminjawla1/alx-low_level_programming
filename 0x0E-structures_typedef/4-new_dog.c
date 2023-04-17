#include <stdlib.h>
#include "dog.h"
/**
*_strlen - finds the len of a str
*@s: string
*Return: len of a str
*/
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
*_strcpy - copies src string to dest
*@dest: destination
*@src: Source
*Return: Pointer to the dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
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

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
