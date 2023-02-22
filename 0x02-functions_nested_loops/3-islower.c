#include "main.h"
/**
* _islower - If the input is a
* lowercase character shows 1. Shows 0 for other cases
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for non lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
