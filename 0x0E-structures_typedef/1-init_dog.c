#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - begins the variable type struct dog
 * @d: points struct dog to initialize
 * @name: names at initialize
 * @age: age at initialize
 * @owner: owner at initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->owner = owner;
	d->age = age;
	d->name = name;
}
