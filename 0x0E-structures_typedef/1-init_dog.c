#include "dog.h"

/**
  *init_dog - initialize a variable of type struct dog
  *@d: pointer
  *@name: name to be int
  *@age: age to be int
  *@owner: owner to be int
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
