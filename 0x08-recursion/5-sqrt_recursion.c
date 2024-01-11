#include "main.h"
/**
 * _sqrt_recursion : function return natural square @n.
 * @n: has no natural square root.
 * Return: negative 1 
 */
int N_square_root(int n, int value);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/** If n is negative, return -1 as it doesn't have a natural square root */
		return(-1);
	}
	else
	{
		return N_square_root(n,1);
	}
int N_square_root(int n, int value)
{
        /** is exactly n, we found the square root */
        if (value * value == n)
        {
                return(value);
        }
        /** less than n */
        else if (value * value < n)
        {
                return(n, value/2);
        }
	/**greater than n, returns -1 */
        else 
		return(-1);
}       
}
