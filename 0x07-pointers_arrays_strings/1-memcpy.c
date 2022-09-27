#include "main.h"
/**
 *_memcpy - this function copies memory area
 *@destn: stored memory
 *@cpd: copied memory
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *destn, char *cpd, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		destn[i] = cpd[j];
		i++;
		j++;
		n--;
	}
	return (destn);
}
