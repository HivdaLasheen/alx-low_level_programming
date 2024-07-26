#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the dog structure.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    // Print Name with "(nil)" check
    printf("Name: %s\n", d->name ? d->name : "(nil)");

    // Print Age with "(nil)" check for negative ages
    if (d->age < 0) 
        printf("Age: (nil)\n");
    else
        printf("Age: %f\n", d->age);

    // Print Owner with "(nil)" check
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
