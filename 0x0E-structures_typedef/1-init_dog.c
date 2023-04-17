#include "dog.h"
#include <stddef.h>
/**
  * init_dog - initializing a struct dog
  * @d: pointer to struct dog
  * @name: point to name string
  * @age: Age of dog
  * @owner: point to owner string
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name == NULL)
		d->name = name;
	else
		d->name = "(Poppy)";
	d->age = age;
	if (owner == NULL)
		d->owner = owner;
	else
		d->owner = "(nil)";
}
