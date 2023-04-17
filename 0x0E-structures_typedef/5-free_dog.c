#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - how many legs a dog has
  * @d: data type dog_t
  *
  * Return: None
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
