#include "main.h"

int real_prime(int n, int a);

/**
 * is_prime_number - tells if an integer is a prime number or not
 * @n: value
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - recursion
 * @n: value
 * @a: iterator
 *
 * Return: 0 or 1
 */
int real_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (real_prime(n, a - 1));
}
