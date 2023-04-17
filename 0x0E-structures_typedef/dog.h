#ifndef DOG_H
#define DOG_H

/**
*struct dog - A dog type blue print
*@name: Name of the dog
*@age: age of the dog
*@owner: Owner of the dog
*
*Description: Sets a blue print for the dog object
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
