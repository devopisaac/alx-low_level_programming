#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of integers.
 *@a: value to be evaluate.
 *@n: value to be evaluate.
 *Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}