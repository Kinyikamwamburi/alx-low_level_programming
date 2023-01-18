#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - new type
 * @name: Element
 * @age: Element
 * @owner: Element
 *
 * Description: create new type with elements
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
