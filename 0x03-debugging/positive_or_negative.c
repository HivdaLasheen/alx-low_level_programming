#include "main.h"
/**
  * main - Tests function that prints if integer is positive or negative
  * Retun : Always 0 (sucess)
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive \n", i);
	else if (i < 0)
		printf("%d is negative \n", i);
	else
		printf("%d is zero \n", i);

	return (0);
}
