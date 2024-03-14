#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 *struct dog - a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef INIT_DOG
#define INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
