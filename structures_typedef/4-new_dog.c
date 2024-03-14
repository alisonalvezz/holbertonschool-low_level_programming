#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @age: age of the new dog
 * @name: name of the new dog
 * @owner: owner of the new dog
 * Return: null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	/**alocar memoria para el nombre**/
	new_dog->name = malloc(strlen(name + 1));

	/**si es nulo, libera la memoria que se alocópara el nombre**/
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/** copiar el nombre **/

	strcpy(new_dog->name, name);

	new_dog->owner = malloc(strlen(owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	/**no es necesario copiar age xq es float y no un puntero a una string de chars**/
	new_dog->age = age;
	return (new_dog);
}
