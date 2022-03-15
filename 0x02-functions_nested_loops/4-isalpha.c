#include "main.h"
/**
 * _isalpha - checks for the alphabet print 1 for alphabet 0 for non-alphabet
 * @c:Character to print
 *
 * Description: header
 * main - entry
 * Return:on success 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
