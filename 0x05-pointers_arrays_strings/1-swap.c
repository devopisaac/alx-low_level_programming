#include<stdio.h>
#include "main.h"
/**
*swap_int - swaps two given integers.
*@a: first value to be evaluate.
*@b: second value to be evaluate.
*Return: not.
*/
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
