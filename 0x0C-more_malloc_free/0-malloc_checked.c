#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b : number of bytes to allocate.
  * @CS : void
  * fails the function should work.
  * Return : a pointer to the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *CS;

	CS = malloc(b);
	if (CS == NULL)
		exit(98);
	return (CS);
}
