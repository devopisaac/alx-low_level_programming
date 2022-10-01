#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: pointers to argument strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* the atoi operator convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}