#include "main.h"
/**
 * print_alphabet_x10 - print all alphabets 10 times
 * description: main header
 * Return: 1 on success
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

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
