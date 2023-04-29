#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  *
  * Return: pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, double age, char *owner);

{
	dog_t *new_dog;
	int name_len, owner_len, i;

	for (name_len = 0; name[name_len] != '\0'; name_len++);
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}

int main(void)
{
	dog_t *my_dog;
	my_dog = new_dog("Buddy", 3.5, "John");
	if (my_dog == NULL)
	{
		printf("Failed to create dog\n");
		return 1;
	}
	printf("My name is %s, and I am %.1g :) - Woof!\n", my_dog->name, my_dog->age);
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return 0;
}

