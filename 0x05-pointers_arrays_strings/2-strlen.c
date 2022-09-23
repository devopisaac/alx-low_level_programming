#include<stdio.h>
#include "main.h"
/**
*_strlen - returns string length.
*@s: value to evaluate.
*Return: 0
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
