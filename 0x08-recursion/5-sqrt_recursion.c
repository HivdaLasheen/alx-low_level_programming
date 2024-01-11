#include "main.h"
/**
 * _sqrt_recursion : function return natural square @n.
 * @n: has no natural square root.
 * Return: negative 1 
 */
int s_root(int n, int v);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/** If n is negative, return -1 */
		return(-1);
	}
	else
	{
		return (s_root(n,1));
	}
}
int s_root(int n, int v)
{
	/** is exactly n, we found the square root */
	if ( v * v == n)
	{
		return(v);
	}
	/** less than n */
	else if (v * v < n)
	{
		return(s_root( n, v + 1);										}
				/** greater than n */
		else
		{
		return (-1);
		}	
		}
		
