#include "main.h"
/**
 * mallooc_checked - if failed exit
 * @b: int
 * Returns: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b){
	int *i = malloc(b);

	if (i == 0)
		exit(98);
	return(i);
}
