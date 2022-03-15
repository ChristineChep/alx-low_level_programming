#include "main.h"
/**
 * print_alphabet_x10 -print all alphabet 10 times
 *
 * main-entry point
 * Description:Print 10 times the alphabet
 * Return: 1 on  success
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
