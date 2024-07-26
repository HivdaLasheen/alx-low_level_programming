#include "dog.h"
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the dog structure to initialize.
 * @name: The dog's name (string).
 * @age: The dog's age (float).
 * @owner: The owner's name (string).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
