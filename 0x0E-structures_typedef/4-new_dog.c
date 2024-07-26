#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure and initializes its fields.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 *
 * Return: Pointer to the newly created dog structure, or NULL if memory 
 *         allocation fails or if name or owner is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;

    /* Allocate memory for the dog structure */ 
    p = malloc(sizeof(dog_t));
    if (p == NULL)
        return (NULL);

    /* Handle NULL name and owner cases */
    if (name == NULL || owner == NULL)
    {
        free(p); 
        return (NULL);
    }

    /* Allocate memory for name and copy it */
    p->name = malloc(strlen(name) + 1);
    if (p->name == NULL)
    {
        free(p);
        return (NULL);
    }
    strcpy(p->name, name);

    /* Allocate memory for owner and copy it */
    p->owner = malloc(strlen(owner) + 1);
    if (p->owner == NULL)
    {
        free(p->name);
        free(p);
        return (NULL);
    }
    strcpy(p->owner, owner);

    /* Set the age */
    p->age = age;

    return (p);
}
