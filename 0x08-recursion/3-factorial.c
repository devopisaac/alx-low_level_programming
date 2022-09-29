#include "main.h"
/**
 * factorial - finds the factorial of a number.
 * @n: the number
 * Return: factorial
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
