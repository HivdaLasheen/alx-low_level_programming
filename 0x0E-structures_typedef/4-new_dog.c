/*
 * File: 4-new_dog.c
 * Auth: Heba Lasheen
 */
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure and initializes its fields.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 *
 * Return: Pointer to the newly created dog structure, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    
    // Allocate memory for the new dog structure
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    // Allocate memory for name and copy it
    new_dog->name = malloc(strlen(name) + 1); // +1 for null terminator
    if (new_dog->name == NULL)
    {
        free(new_dog); // Free the dog structure if name allocation fails
        return NULL;
    }
    strcpy(new_dog->name, name);

    // Allocate memory for owner and copy it
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name); // Free the name if owner allocation fails
        free(new_dog);       // Free the dog structure
        return NULL;
    }
    strcpy(new_dog->owner, owner);

    // Set the age
    new_dog->age = age;

    return new_dog;
}
