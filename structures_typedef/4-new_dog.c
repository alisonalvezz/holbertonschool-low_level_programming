#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	/** alocar memoria*/
	int lenght_name = 0, lenght_owner = 0;
	int i;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	{	/** checkear si la alocaciÃ³n fue exitosa*/
		return (NULL);
	}

	for (; name[lenght_name]; lenght_name++) /**calcular tamaÃo de strings*/
		;
	for (; owner[lenght_owner]; lenght_owner++)
		;
	new_dog->name = malloc(sizeof(char) * (lenght_name + 1));
	new_dog->owner = malloc(sizeof(char) * (lenght_owner + 1));

	if (!new_dog->name || !new_dog->owner)
	{	/** si la alocacion fue  exitosa**/
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= lenght_name; i++)
	/** copiar el nombre y el dueÃo char por char*/
	{
	new_dog->name[i] = name[i];
	}

	for (i = 0; i <= lenght_owner; i++)
	{
	new_dog->owner[i] = owner[i];
	}

	new_dog->age = age;

	return (new_dog);

}
