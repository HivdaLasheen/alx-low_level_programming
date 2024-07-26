#include "dog.h"
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float   
 age, char *owner)
{
    if (d == NULL)
        return;

    d->name = strdup(name);
    d->age = age;
    d->owner = strdup(owner);   

}
