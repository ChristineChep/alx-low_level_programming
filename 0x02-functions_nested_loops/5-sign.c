#include "main.h"
/**
 * print_sign - print sign of  number
 * @n: Sign to print
 * Description: Prints sign
 * Return: 1 if positive 0 ifzero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
