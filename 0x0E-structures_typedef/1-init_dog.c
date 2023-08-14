#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
   d->age = age;
   d->name = name;
   d->owner = owner;
}