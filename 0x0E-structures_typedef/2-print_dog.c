#include <stdio.h>
#include "dog.h"

/**
  * print_dog - prints the contents of struct dog
  * @d: pointer to struct dog
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("%s: %s\n", "Name", (d->name != NULL) ? d->name : "(nil)");
	printf("%s: %.6f/n", "Age", d->age);
	printf("%s: %s\n", "Owner", (d->owner != NULL) ? d->owner : "(nil)");
}

