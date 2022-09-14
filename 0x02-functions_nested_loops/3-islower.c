#include "main.h"
/**
* _islower - Shows 1 if the input is a
* lowercase character. In other cases, it shows 0
*
* @c: ASCII codes of characters
*
* Return: 1 for lowercase. 0 in other cases.
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
