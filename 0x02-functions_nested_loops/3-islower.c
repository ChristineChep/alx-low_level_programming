#include "main.h"
/**
 * main- entry point
 * Description:checks for lowercase characters
 * Returns 0 or 1
 */
int _islower(int c)
{
	if (c >=  97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
