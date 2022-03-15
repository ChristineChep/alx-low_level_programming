#include "main.h"
/**
 * main-entry point
 * description:Print 10 times the alphabet
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	j = 0;
	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
