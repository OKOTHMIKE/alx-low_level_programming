#include "main.h"
/**
 *helperfunction - checks if sqrt of number exists.
 *@num: number.
 *@psqrt: possible sqrt of number.
 *
 * Return: sqrt of number ot -1 for error.
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}

