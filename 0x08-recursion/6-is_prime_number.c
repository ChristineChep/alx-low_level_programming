#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n)
{
	if (n % n == 0 && n % 1 ==0)
	{

		return (1);
	}
	else
	{

		return (0);
	}

}
