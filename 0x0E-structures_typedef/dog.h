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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
