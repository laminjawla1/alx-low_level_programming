/**
*init_dog - initialize a dog object
*@d: Dog obj
*@name: Name
*@age: Age
*@owner: Owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
