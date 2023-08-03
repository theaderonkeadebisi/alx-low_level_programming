#include "main.h"

int real_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recurses
 * @n: value
 * @a: iterator
 *
 * Return: square root
 */
int real_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (real_sqrt_recursion(n, a + 1));
}
