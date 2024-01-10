#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		/**current char is the null return 0*/
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
		/**recursive call,pointer incremented by one */
		/** +1 to result of recursive call, returns the sum */
}
