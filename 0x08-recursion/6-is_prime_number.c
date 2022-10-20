#include "main.h"

/**
 * _check_prime - check if number is prime
 *
 * @n: number we are to check if it is a prime number
 *
 * @check: next number to divide n by
 *
 * Return: returns 1 if n is prime number
 * return 0, n is not a prime number
 */

int _check_prime(int n, int check)
{
	int ret;

	if (check == 1)
		return (1);
	if (n % check == 0)
		return (0);
	ret = _check_prime(n, check - 1);
	return (ret);
}
/**
 * is_prime_number - checks if number is prime number
 *
 * @n: number to be checked
 *
 * Return: if number is prime, return 1
 * if number is not prime, return 0
 */

int is_prime_number(int n)
{
	int check = n;
	int ret;

	if (n == 1)
		return (0);
	if (n < 1)
		return (0);
	if (n % check == 0)
	{
		ret = _check_prime(n, check - 1);
		return (ret);
	}
	return (0);
}
