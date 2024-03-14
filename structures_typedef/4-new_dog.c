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

/**
 * string_lenght - the lenght of a string
 * @str: the string
 * Return: the string
 */
int string_length(const char *str)
{
	/**funcion para calcular el largo de una string**/
	int lenght = 0;
	while (str[lenght] != '\0')
	{
	lenght ++
	}
	return lenght;
}


dog_t *new_dog(char *name, float age, char *owner)
{
	int o = 0;
	int n = 0;
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	/**alocar memoria para el nombre**/
	new_dog->name = malloc(sizeof(char) * (string_lenght(name) + 1));

	/**si es nulo, libera la memoria que se alocópara el nombre**/
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/** copiar el nombre **/
	while (name[n] != '\0')
	{
		new_dog->name[n] = name[n];
		n++;
	}

	new_dog->owner = malloc(sizeof(char) * (string_lenght(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	while (owner[o] != '\0')
	{
		new_dog->owner[o] = owner[o];
		o++;
	}

	/**no es necesario copiar age xq es float y no un puntero a una string de chars**/
	new_dog->age = age;
	return (new_dog);
}
