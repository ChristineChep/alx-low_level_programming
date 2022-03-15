#include <stdio.h>
#include "main.h"
/**
 * main-Entry point
 * Description: Print alphabet in lowercase
 * Return: 0 success
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
