#include "dog.h"
#include <string.h>

/**
  *new_dog - creates a new dog
  *@name: new name to create
  *@age: new age to create
  *@owner: new owner to create
  *Return: NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(strlen(name) + 1);

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	strcpy(new_dog_ptr->name, name);

	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);

		free(new_dog_ptr);
		return (NULL);
	}

	strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
