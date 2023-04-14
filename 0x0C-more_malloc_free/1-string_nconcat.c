#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates n bytes of a string to another string.
  * @s1: string to append to.
  * @s2: string to concatenate from.
  * @n: number of bytes from cs502 to concatenate to cs501.
  * Return: pointer to the resulting string.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, cs1 = 0, cs2 = 0;

	while (s1 && s1[cs1])
		cs1++;
	while (s2 && s2[cs2])
		cs2++;

	if (n < cs2)
		s = malloc(sizeof(char) * (cs1 + n + 1));
	else
		s = malloc(sizeof(char) * (cs1 + cs2 + 1));
