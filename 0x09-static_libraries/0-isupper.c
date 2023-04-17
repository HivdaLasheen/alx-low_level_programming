#include "main.h"
/**
  * _isupper - if uppercase return 1, if not return 0.
  *
  * @c: This is the entry.
  *
  * Return: 0
  *
  **/
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
